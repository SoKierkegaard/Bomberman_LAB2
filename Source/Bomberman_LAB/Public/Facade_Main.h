// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Maze_BuilderConcrete.h"
#include "CrearMapaTrampas.h"
#include "CrearMapaCannons.h"
#include "GameFramework/Actor.h"
#include "Facade_Main.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AFacade_Main : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacade_Main();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Creamos los mapas de trampas y cañones
	AMaze_BuilderConcrete* MazeBuilder;
	ACrearMapaTrampas* MapaTrampas;
	ACrearMapaCannons* MapaCannons;

	void ActivarTrampa();

};
