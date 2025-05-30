// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicBlock.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ABasicBlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* MallaBloque;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
