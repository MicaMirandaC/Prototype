// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PrototypeGameMode.generated.h"

class AFabrica; class ABloque; class AFabricaBloquesEstaticos; class AFabricaBloquesMagicos;
UCLASS(minimalapi)
class APrototypeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APrototypeGameMode();

public:
	virtual void BeginPlay() override;

	UPROPERTY()
	class ABloqueBase* BloqueBase;

	// FactoryMethodGameMode.h

	UPROPERTY()
	AFabrica* FabricaDeBloquesEstaticos;

	UPROPERTY()
	AFabrica* FabricaDeBloquesMagicos;

public:
	// Declarar la posición del siguiente bloque
	FVector posicionSiguienteBloque = FVector(1000.0f, 500.0f, 20.0f);

	// Declarar un mapa de bloques como un array bidimensional

	TArray<TArray<int32>> aMapaBloques = {
	{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{4, 0, 1, 0, 1, 2, 0, 3, 5, 0, 0, 0, 3, 0, 0, 6, 4},
	{4, 2, 3, 6, 1, 2, 6, 0, 5, 0, 6, 0, 3, 1, 0, 6, 4},
	{4, 0, 0, 0, 2, 0, 2, 0, 0, 0, 3, 6, 0, 1, 0, 0, 4},
	{4, 3, 1, 2, 5, 0, 0, 5, 6, 0, 5, 0, 1, 2, 3, 5, 4},
	{4, 0, 0, 2, 0, 2, 0, 0, 0, 1, 0, 3, 0, 0, 3, 0, 4},
	{4, 1, 5, 0, 2, 0, 6, 0, 6, 2, 0, 0, 5, 0, 0, 0, 4},
	{4, 0, 0, 1, 0, 0, 2, 0, 1, 0, 3, 6, 0, 2, 0, 1, 4},
	{4, 6, 5, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 4},
	{4, 0, 0, 0, 2, 0, 3, 2, 6, 0, 2, 0, 0, 0, 0, 0, 4},
	{4, 1, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 2, 0, 0, 0, 4},
	{4, 0, 0, 5, 3, 0, 5, 0, 0, 2, 0, 0, 0, 0, 5, 0, 4},
	{4, 3, 1, 0, 2, 0, 0, 1, 0, 0, 1, 0, 0, 0, 3, 0, 4},
	{4, 2, 0, 5, 0, 5, 0, 6, 0, 2, 0, 0, 0, 5, 3, 5, 4},
	{4, 0, 0, 5, 0, 0, 2, 0, 0 ,1, 3, 0, 2, 0, 3, 0, 4},
	{4, 5, 2, 0, 3, 1, 0, 1, 5, 0, 0, 1, 3, 0, 0, 2, 4},
	{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
	};

	float XInicial = 500.00f;
	float YInicial = 500.00f;
	float AnchoBloque = 100.0f;
	float LargoBloque = 100.0f;
	ABloque* BloqueActual = nullptr;
	// Declarar un array de punteros a objetos de tipo BloqueMadera
	TArray<ABloque*> aBloques;

	// Mapa que asocia ID únicos con bloques generados
	TMap<int32, ABloque*> MapaDeBloques;

	// Contador incremental de IDs
	int32 IDBloqueActual = 1;

	//void SpawnBloques();
	void SpawnBloque(FVector posicion, int32 tipoBloque);
	// Método para generar bloques en el mapa
	void SpawnBloques();

};


