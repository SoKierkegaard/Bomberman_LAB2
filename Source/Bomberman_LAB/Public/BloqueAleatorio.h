// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAleatorio.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueAleatorio : public ABloque
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ABloqueAleatorio();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector TargetLocation;
	FTimerHandle TimerHandle_CambioDireccion;
};
