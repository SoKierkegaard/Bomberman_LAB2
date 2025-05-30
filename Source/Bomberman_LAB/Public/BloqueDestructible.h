// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaBloquesTest.h"
#include "BloqueDestructible.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ABloqueDestructible : public AFabricaBloquesTest
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueDestructible();
	virtual ABasicBlock* GenerateBlock(FString TypeBlock) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
