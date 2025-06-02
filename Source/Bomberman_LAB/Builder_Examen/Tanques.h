// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tanques.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ATanques : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATanques();

	UStaticMeshComponent* MeshComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector PosicionInicial;
	float DistanciaObjetivo = 3000.0f;
};
