// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueY.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueY : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueY(); //Contador
	//virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Método llamado cada frame
	virtual void Tick(float DeltaTime) override;
	FVector PosicionInicial;
	float DistanciaObjetivo = 1000.0f;
};
