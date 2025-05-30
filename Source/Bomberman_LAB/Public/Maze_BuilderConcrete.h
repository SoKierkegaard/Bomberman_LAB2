// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Maze_Builder.h"
#include "GameFramework/Actor.h"
#include "Maze_BuilderConcrete.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AMaze_BuilderConcrete : public AActor, public IMaze_Builder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMaze_BuilderConcrete();

private:
	class AMaze_Test* MazeTest;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void BuildWoods();
	virtual void BuildConcrete();
	virtual void BuildSteel();
	virtual void BuildBrick();
	virtual void BuildPuertas();
	virtual void BuildVidrios();

	virtual void FullMaze();

	
};
