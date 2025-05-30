// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Maze_Test.h"
#include "Maze_BuilderConcrete.h"
#include "GameFramework/Actor.h"
#include "Builder_Test.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ABuilder_Test : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilder_Test();
	
private:
	//The Builder Actor
	class ALaberinto_Test* LaberintoBuilder;
	//The Engineer Actor
	class ADirector_Builder* Director;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AMaze_BuilderConcrete* Builder;
};
