// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrototypeGameMode.h"
#include "PrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "BloqueBase.h"

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
}

