// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueGenerador.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueGenerador : public ABloque
{
	GENERATED_BODY()
public:
    
	ABloqueGenerador();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	bool bBlocksSpawned = false;
	void SpawnRandBloques();
};
