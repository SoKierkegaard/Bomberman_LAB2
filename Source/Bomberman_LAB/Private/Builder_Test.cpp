// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder_Test.h"
#include "Maze_Test.h"
#include "Maze_BuilderConcrete.h"
#include "Director_Builder.h"


// Sets default values
ABuilder_Test::ABuilder_Test()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_Test::BeginPlay()
{
	Super::BeginPlay();
	// Create the Builder and Director
	// Crear el constructor del laberinto
	Builder = GetWorld()->SpawnActor<AMaze_BuilderConcrete>(AMaze_BuilderConcrete::StaticClass());
	// Crear el director del laberinto
	Director = GetWorld()->SpawnActor<ADirector_Builder>(ADirector_Builder::StaticClass());


	////Set the Builder for the Director and create the Laberinto
	Director->SetBuilder(Builder);
	//Director->CreateFullMaze();
	//Director->CreateSteelMaze();
	//Director->CreateWoodMaze();
	//Director->CreateConcreteMaze();
	//Director->CreateBrickMaze();

	Director->CreateFullMazePuertasVidrios();
	//Director->CreateFullMazePuertas();
	//Director->CreateFullMazeVidrios();
}

// Called every frame
void ABuilder_Test::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

