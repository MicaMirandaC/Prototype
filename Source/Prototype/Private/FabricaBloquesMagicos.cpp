// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloquesMagicos.h"
#include "BloqueMov.h"
#include "BloqueRandom.h"

// Sets default values
AFabricaBloquesMagicos::AFabricaBloquesMagicos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBloquesMagicos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBloquesMagicos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABloque* AFabricaBloquesMagicos::CrearBloque(FString tipoBloque, FVector posicionBloque)
{
	//Select which potion to spawn depending on the passed string
	if (tipoBloque.Equals("Mov")) {
		return GetWorld()->SpawnActor<ABloqueMov>
			(ABloqueMov::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque.Equals("Random")) {
		return GetWorld()->SpawnActor<ABloqueRandom>
			(ABloqueRandom::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else {
		return nullptr;
	}
}
