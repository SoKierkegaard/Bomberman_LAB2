// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueDiagonal.generated.h"

/**
 *
 */
UCLASS()
class BOMBERMAN_LAB_API ABloqueDiagonal : public ABloque
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ABloqueDiagonal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool bMoviendoArriba = true; //variable que cambia la direccion 
	//la variable bmoviendo controla si el bloque sube o baja, cambia la direccion cuando el bloque llega
	//a x o z
	FVector PosicionInicial;
};
