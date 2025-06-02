// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo_Comun.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AEnemigo_Comun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo_Comun();

	UStaticMeshComponent* MeshComponent;//Componente de malla estatica para el enemigo comun
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector PosicionInicial;
	float DistanciaObjetivo = 3000.0f;
};
