// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WoodBlockTest.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AWoodBlockTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWoodBlockTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual AWoodBlock* ConcoctPotion(FString PotionSKU)

	//Order, concoct and returns a Potion of a specific Category
	//APotion* OrderPotion(FString Category);
};
