// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bomb.h"
#include "GameFramework/Actor.h"
#include "CrearMapaTrampas.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ACrearMapaTrampas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACrearMapaTrampas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ABomb* Trampa;

	TArray<TArray<int32>> aTrampas = {
		{1,0,0,1,0,0,0,0,1},
		{0,0,1,0,0,0,0,0,0},
		{1,0,0,1,0,1,0,0,1},
		{1,0,1,0,1,1,0,0,0},
		{1,0,0,1,0,0,0,0,1},
		{0,0,1,0,0,0,0,0,0},
		{1,0,0,1,0,1,0,0,1},
		{1,0,1,0,1,1,0,0,0},
		{1,0,1,0,1,1,0,0,0}
	};

	void CrearMapaTrampas();
};
