// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloquesEstaticos.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"

// Sets default values
AFabricaBloquesEstaticos::AFabricaBloquesEstaticos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBloquesEstaticos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBloquesEstaticos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABloque* AFabricaBloquesEstaticos::CrearBloque(FString tipoBloque, FVector posicionBloque)
{
	//Select which potion to spawn depending on the passed string
	if (tipoBloque.Equals("Acero")) {
		return GetWorld()->SpawnActor<ABloqueAcero>
			(ABloqueAcero::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque.Equals("Concreto")) {
		return GetWorld()->SpawnActor<ABloqueConcreto>
			(ABloqueConcreto::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque.Equals("Ladrillo")) {
		return GetWorld()->SpawnActor<ABloqueLadrillo>
			(ABloqueLadrillo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque.Equals("Madera")) {
		return GetWorld()->SpawnActor<ABloqueMadera>
			(ABloqueMadera::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else {
		return nullptr;
	}
}
