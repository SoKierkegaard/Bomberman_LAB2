// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Generador.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AGenerador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenerador();
private:

	UPROPERTY()
	AGenerador* Instance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* MallaBloque;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
