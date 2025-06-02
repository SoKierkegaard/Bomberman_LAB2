// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ejercito.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AEjercito : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercito();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Mapas de posiciones de las unidades

	TArray<TArray<int32>> PosicionesSoldados = {
	{0, 0, 1, 1, 1, 1, 1, 0},
	{0, 0, 1, 1, 1, 1, 1, 0},
	{0, 0, 1, 1, 1, 1, 1, 0},
	{0, 0, 1, 1, 1, 1, 1, 0},
	{0, 0, 1, 1, 1, 1, 1, 0}
	};

	TArray<TArray<int32>> PosicionesTanques = {
	{0, 2, 0, 0, 0, 0, 0, 0},
	{0, 2, 0, 0, 0, 0, 0, 0},
	{0, 2, 0, 0, 0, 0, 0, 0},
	{0, 2, 0, 0, 0, 0, 0, 0},
	{0, 2, 0, 0, 0, 0, 0, 0}
	};

	TArray<TArray<int32>> PosicionesComandantes = {
	{0, 0, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 0, 0, 0, 3}
	};

	TArray<TArray<int32>> PosicionesTorretas = {
	{4, 0, 0, 0, 0, 0, 0, 0},
	{4, 0, 0, 0, 0, 0, 0, 0},
	{4, 0, 0, 0, 0, 0, 0, 0},
	{4, 0, 0, 0, 0, 0, 0, 0},
	{4, 0, 0, 0, 0, 0, 0, 0}
	};

	//Posiciones desde donde se van a generar las unidades
	float XInicial = 1000.0f;
	float YInicial = 1000.0f;
	float ZInicial = 0.0f;
	float EspacioEntreUnidades = 250.0f;
};
