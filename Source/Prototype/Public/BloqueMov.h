// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueMov.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_API ABloqueMov : public ABloque
{
	GENERATED_BODY()

public:
    ABloqueMov(); //Constructor

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    FVector PosicionInicial;
    FVector PosicionObjetivo;

    float TiempoEntreMovimientos;
    float TiempoDesdeUltimoMovimiento;
    float VelocidadMovimiento;
    //Indica si el bloque se est� moviendo hacia un objetivo
    bool bMoviendoAObjetivo;

    void ElegirNuevaDireccion();

    // Variable para determinar el �ltimo eje de movimiento (X o Z)
    FString UltimoEje; // "X" o "Z"

};
