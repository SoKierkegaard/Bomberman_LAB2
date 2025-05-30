// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicBlock.h"
#include "SteelBlock.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ASteelBlock : public ABasicBlock
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASteelBlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
