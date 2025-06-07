// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueClone.generated.h"

UCLASS()
class PROTOTYPE_API ABloqueClone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueClone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/*
protected:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	
	// Implementación de Clonar
	virtual AActor* Clonar(FVector Posicion, FRotator Rotacion) override;
	*/
};
