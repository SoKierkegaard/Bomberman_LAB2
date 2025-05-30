// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IPrototype_Test.h"
#include "GameFramework/Actor.h"
#include "PrototypeConcrete.generated.h"

UCLASS()
class BOMBERMAN_LAB_API APrototypeConcrete : public AActor, public IIPrototype_Test
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APrototypeConcrete();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Implement the Clone method from the interface
	virtual AActor* Clone() const override;
};
