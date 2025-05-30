// Fill out your copyright notice in the Description page of Project Settings.


#include "Director_Builder.h"

// Sets default values
ADirector_Builder::ADirector_Builder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector_Builder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector_Builder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector_Builder::CreateSteelMaze()
{
	// Call the builder methods to create the maze blocks
	if (Builder)
	{
		Builder->BuildConcrete();
		Builder->BuildSteel();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder is not set!"));
	}
}

void ADirector_Builder::CreateConcreteMaze()
{
	// Call the builder methods to create the maze blocks
	if (Builder)
	{
		Builder->BuildConcrete();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder is not set!"));
	}
}

void ADirector_Builder::CreateWoodMaze()
{
	// Call the builder methods to create the maze blocks
	if (Builder)
	{
		Builder->BuildConcrete();
		Builder->BuildWoods();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder is not set!"));
	}
}

void ADirector_Builder::CreateBrickMaze()
{
	// Call the builder methods to create the maze blocks
	if (Builder)
	{
		Builder->BuildConcrete();
		Builder->BuildBrick();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder is not set!"));
	}
}

void ADirector_Builder::CreateFullMaze()
{
	// Call the builder methods to create the maze blocks
	if (Builder)
	{
		Builder->FullMaze();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder is not set!"));
	}
}

void ADirector_Builder::SetBuilder(IMaze_Builder* NewBuilder)
{
	Builder = NewBuilder;
}

void ADirector_Builder::CreateFullMazePuertas()
{
	// Call the builder methods to create the maze blocks
	if (Builder)
	{
		Builder->FullMaze();
		Builder->BuildPuertas();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder is not set!"));
	}
}

void ADirector_Builder::CreateFullMazeVidrios()
{
	// Call the builder methods to create the maze blocks
	if (Builder)
	{
		Builder->FullMaze();
		Builder->BuildVidrios();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder is not set!"));
	}
}

void ADirector_Builder::CreateFullMazePuertasVidrios()
{
	// Call the builder methods to create the maze blocks
	if (Builder)
	{
		Builder->FullMaze();
		Builder->BuildPuertas();
		Builder->BuildVidrios();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Builder is not set!"));
	}
}

