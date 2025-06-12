// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fabrica.h"
#include "FabricaBloquesMagicos.generated.h"

/**
 *
 */
UCLASS()
class PROTOTYPE_API AFabricaBloquesMagicos : public AFabrica
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaBloquesMagicos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	virtual ABloque* CrearBloque(FString tipoBloque, FVector posicionBloque) override;

};
