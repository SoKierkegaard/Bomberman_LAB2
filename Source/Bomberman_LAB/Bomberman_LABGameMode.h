// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bomberman_LABGameMode.generated.h"

class ABloque; class AEnemigo;

UCLASS(minimalapi)
class ABomberman_LABGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberman_LABGameMode();
public:
	virtual void BeginPlay() override;

public:
	void SpawnLaberinto();
	// Declarar la posición del siguiente bloque
	FVector posicionSiguienteBloque = FVector(1000.0f, 500.0f, 20.0f);

	// Declarar un mapa de bloques como un array bidimensional

	TArray<TArray<int32>> aMapaBloques = {
	{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{4, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 4},
	{4, 0, 2, 3, 3, 2, 1, 2, 3, 3, 2, 1, 2, 3, 3, 2, 1, 2, 3, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 1, 1, 2, 1, 2, 0, 1, 1, 2, 1, 2, 0, 1, 1, 2, 1, 2, 0, 4},
	{4, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 1, 1, 2, 1, 2, 0, 1, 1, 2, 1, 2, 0, 1, 1, 2, 1, 2, 0, 4},
	{4, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 4},
	{4, 0, 2, 3, 3, 2, 1, 2, 3, 3, 2, 1, 2, 3, 3, 2, 1, 2, 3, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 1, 1, 2, 1, 2, 0, 1, 1, 2, 1, 2, 0, 1, 1, 2, 1, 2, 0, 4},
	{4, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
	};

	/*
	TArray<TArray<int32>> aMapaBloques = {
	{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{4, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
	{4, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
	};
	*/

	float XInicial = 1000.0f;
	float YInicial = 1000.0f;
	float ZInicial = 0.0f;
	float AnchoBloque = 100.0f;
	float LargoBloque = 100.0f;
	float AlturaBloque = 0.0f;
	ABloque* BloqueActual = nullptr;
	// Declarar un array de punteros a objetos
	TArray<ABloque*> aBloques;

	//Arrays para el metodo SpawnBloqueMadera (Ejercicio1)
	TArray<FVector> aBloquesMadera;
	TArray<FVector> aBloquesBorde;
	TArray<FVector> PosValidas;

	UPROPERTY()
	TArray<AEnemigo*> EnemigosSpawneados;
	int32 TotalEnemigosIniciales;
	int32 EnemigosEliminados;
	TSubclassOf<AActor> ClaseBomba;

	bool bloqueignorado = false;

	FTimerHandle TimerHandle_Eliminar;

	void SpawnBloque(FVector posicion, int32 tipoBloque);

	void SpawnJugadorEnCasillaLibre();

	void SpawnEnemigos();

	void ChangeBloque();

	void GenerarEnemigos();

	void EliminarEnemigo();

	void GenerarLaberintoAleatorio();

	void SpawnBloqueMadera();

	void SpawnBloqueMadera2();

	void AleatorizarMapa(TArray<TArray<int32>>& Mapa);

	void SpawnBomba();


};
