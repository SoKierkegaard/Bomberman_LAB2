// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestSingleton.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ATestSingleton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestSingleton();

private:
	UPROPERTY()
	class AGenerador* Generador;
	class ABomb* Bomba;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* MallaBloque;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void GenerarBloque();
	FTimerHandle TimerHandle;

};
