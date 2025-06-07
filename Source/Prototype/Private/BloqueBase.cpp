// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBase.h"

// Sets default values
ABloqueBase::ABloqueBase()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	//Representa la malla del bloque
	MallaBloqueBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//Adjunta la malla al componente
	MallaBloqueBase->SetupAttachment(RootComponent);
	//Busca una malla de cubo ya incluida en el contenido del proyecto
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloqueBase(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaBloqueBase.Succeeded())
	{
		//Cargar la malla del bloque
		MallaBloqueBase->SetStaticMesh(ObjetoMallaBloqueBase.Object);

		MallaBloqueBase->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}

	if (MallaBloqueBase) //Verifica si la maya existe
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));

		if (MaterialBase.Succeeded())
		{
			//Asigna el material
			MallaBloqueBase->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}
	//Bloque empieza con su movimiento hacia arriba 
	Subiendo = true;
}

// Called when the game starts or when spawned
void ABloqueBase::BeginPlay()
{
	Super::BeginPlay();

	AlturaInicial = GetActorLocation().Z;
}

// Called every frame
void ABloqueBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Pos = GetActorLocation();
	float Desplazamiento = 20.0f * DeltaTime;

	//Si Subiendo es true, sube; si no, baja
	Pos.Z += Subiendo ? Desplazamiento : -Desplazamiento;
	SetActorLocation(Pos);

	//Si sube o baja más de 50 unidades, invierte la dirección
	if (FMath::Abs(Pos.Z - AlturaInicial) > 150.0f)
		Subiendo = !Subiendo;
}

AActor* ABloqueBase::Clonar(FVector Pos, FRotator Rot)
{
	if (!GetWorld()) return nullptr;
	//Crea una instancia de FActorSpawnParameters
	//Mayor FIDELIDAD al clonar
	FActorSpawnParameters Parametros;
	Parametros.Template = this; // Usa este actor como plantilla

	//Crea uno nuevo con la misma clase posicion y rotacion
	return GetWorld()->SpawnActor<ABloqueBase>(GetClass(), Pos, Rot, Parametros);
	//Crea un nuevo actor igual que este en la posición y rotación dadas.
}

//Cambiar el nombre del actor
void ABloqueBase::Configurar(FString Nombre)
{
	//Cambia el nombre del actor para identificarlo.
	SetActorLabel(Nombre);
	
	// Genera una escala aleatoria entre 0.5 y 2.0
	float Escala = FMath::FRandRange(0.5f, 2.f);
	SetActorScale3D(FVector(Escala)); // Escala uniforme en X, Y, Z

	// Mensaje para depurar
	UE_LOG(LogTemp, Warning, TEXT("Configurando %s con escala %.2f"), *Nombre, Escala);
}
