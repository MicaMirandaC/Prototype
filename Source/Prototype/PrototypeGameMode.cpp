// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrototypeGameMode.h"
#include "PrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "BloqueBase.h"
#include "Bloque.h"
#include  "Fabrica.h"
#include "FabricaBloquesEstaticos.h"
#include "FabricaBloquesMagicos.h"

APrototypeGameMode::APrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void APrototypeGameMode::BeginPlay()
{
    Super::BeginPlay();

	// Crea el bloque base
	FVector PosBase = FVector(0.f, 0.f, 100.f);
	FRotator RotBase = FRotator::ZeroRotator;

	// Crea el bloque base (el original que se va a clonar)
	BloqueBase = GetWorld()->SpawnActor<ABloqueBase>();

	//Clonar múltiples veces
	if (BloqueBase)
	{
		// Solo se encarga de indicar cuántos clones y sus posiciones
		for (int32 i = 0; i < 5; i++)
		{
			FVector PosClon = FVector(300.f * (i + 1), 0.f, 0.f);
			BloqueBase->Clonar(PosClon, RotBase);
		}
	}

	//Crea las fabricas
	FabricaDeBloquesEstaticos = GetWorld()->SpawnActor<AFabricaBloquesEstaticos>(AFabricaBloquesEstaticos::StaticClass());
	FabricaDeBloquesMagicos = GetWorld()->SpawnActor<AFabricaBloquesMagicos>(AFabricaBloquesMagicos::StaticClass());

	SpawnBloques();
}

// Función para generar un bloque
void APrototypeGameMode::SpawnBloque(FVector posicionBloque, int32 tipoBloque)
{
	//ABloque* BloqueGenerado = nullptr;

	ABloque* BloqueGenerado = nullptr;
	// Elegir tipo de bloque basado en el valor
	if (tipoBloque == 6)
	{
		BloqueGenerado = FabricaDeBloquesEstaticos->CrearBloque("Ladrillo", posicionBloque);
	}
	else if (tipoBloque == 5)
	{
		BloqueGenerado = FabricaDeBloquesEstaticos->CrearBloque("Concreto", posicionBloque);
	}
	else if (tipoBloque == 4)
	{
		BloqueGenerado = FabricaDeBloquesEstaticos->CrearBloque("Acero", posicionBloque);
	}
	else if (tipoBloque == 3)
	{
		BloqueGenerado = FabricaDeBloquesEstaticos->CrearBloque("Madera", posicionBloque);
	}
	else if (tipoBloque == 2)
	{
		BloqueGenerado = FabricaDeBloquesMagicos->CrearBloque("Mov", posicionBloque);
	}
	else if (tipoBloque == 1)
	{
		BloqueGenerado = FabricaDeBloquesMagicos->CrearBloque("Random", posicionBloque);
	}
	else {
		return;
	}
	// Agregar el bloque al TArray si fue generado
	if (BloqueGenerado)
	{
		aBloques.Add(BloqueGenerado);

		// Asignar un ID único
		MapaDeBloques.Add(IDBloqueActual++, BloqueGenerado);
	}

}

void APrototypeGameMode::SpawnBloques()
{
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			int32 valor = aMapaBloques[fila][columna];
			if (valor != 0)
			{
				FVector posicionBloque = FVector(
					XInicial + columna * AnchoBloque,
					YInicial + fila * LargoBloque,
					20.0f);

				SpawnBloque(posicionBloque, valor); // Usa el método que ya tenías
			}
		}
	}
}