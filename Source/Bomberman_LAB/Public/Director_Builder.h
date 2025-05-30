// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Maze_Builder.h"
#include "GameFramework/Actor.h"
#include "Director_Builder.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ADirector_Builder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector_Builder();

private:
	IMaze_Builder* Builder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreateSteelMaze();
	void CreateConcreteMaze();
	void CreateWoodMaze();
	void CreateBrickMaze();
	void CreateFullMaze();

	// Set the Builder for the Director
	void SetBuilder(IMaze_Builder* NewBuilder);

	void CreateFullMazePuertas();
	void CreateFullMazeVidrios();
	void CreateFullMazePuertasVidrios();
};
