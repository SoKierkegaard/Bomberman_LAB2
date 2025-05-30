// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueX.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueX : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueX();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override; //funcion de movimento
private:
	FVector PosicionInicial;
	float DistanciaObjetivo = 1000.0f;
};
