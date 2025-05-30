// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAleatorio_Ex.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueAleatorio_Ex : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueAleatorio_Ex();
	//virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector PosicionInicial;

	void ElegirDireccionAleatoria();
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool bSeMovio = false;

	float DistanciaMaxima = 100.0f;
	float Velocidad = 50.0f;
	bool bInvertir = false;
	FVector DireccionMovimiento;
	FTimerHandle TimerHandle_CambioDireccion;
};
