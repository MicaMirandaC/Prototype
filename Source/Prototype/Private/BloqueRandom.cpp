// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueRandom.h"

ABloqueRandom::ABloqueRandom()
{
	PrimaryActorTick.bCanEverTick = true; // Habilitar la funci�n Tick() 

	if (MallaBloque)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));

		if (MaterialBase.Succeeded())
		{
			MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
		}
	}

	//Inicializacion de variables
	bPuedeGirar = true;
	RotationSpeed = 50.0f; // Velocidad de rotaci�n por defecto
}

void ABloqueRandom::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueRandom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bPuedeGirar)
	{
		FRotator NewRotation = GetActorRotation();
		NewRotation.Yaw += RotationSpeed * DeltaTime;
		SetActorRotation(NewRotation);
	}
}