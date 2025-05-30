// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloqueIndestructible.h"
#include "BloqueDestructible.h"
#include "GameFramework/Actor.h"
#include "FactoryMethodTest.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AFactoryMethodTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFactoryMethodTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* MallaBloque;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void GenerarLaberinto();

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
	AFabricaBloquesTest* BloqueDestructible;
	AFabricaBloquesTest* BloqueIndestructible;
};
