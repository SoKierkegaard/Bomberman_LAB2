// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicBlock.h"
#include "GameFramework/Actor.h"
#include "FabricaBloquesTest.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AFabricaBloquesTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaBloquesTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* MallaBloque;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual ABasicBlock* GenerateBlock(FString TypeBlock)
		PURE_VIRTUAL(ABasicBlock::GenerateBlock, return nullptr;);
};
