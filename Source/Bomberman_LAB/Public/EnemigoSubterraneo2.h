// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoSubterraneo2.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API AEnemigoSubterraneo2 : public AEnemigo
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	AEnemigoSubterraneo2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector TargetLocation;
};