// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilder.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AIBuilder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
