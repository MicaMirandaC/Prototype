// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueRandom.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_API ABloqueRandom : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueRandom(); //Contador

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Método llamado cada frame
	virtual void Tick(float DeltaTime) override;

public:
	bool bPuedeGirar;
	float RotationSpeed;
};
