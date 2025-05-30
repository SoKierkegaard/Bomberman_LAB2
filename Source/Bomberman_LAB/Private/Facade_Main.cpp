// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade_Main.h"

// Sets default values
AFacade_Main::AFacade_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacade_Main::BeginPlay()
{
	Super::BeginPlay();
	MazeBuilder = GetWorld()->SpawnActor<AMaze_BuilderConcrete>(AMaze_BuilderConcrete::StaticClass());
	MapaCannons = GetWorld()->SpawnActor<ACrearMapaCannons>(ACrearMapaCannons::StaticClass());
	MapaTrampas = GetWorld()->SpawnActor<ACrearMapaTrampas>(ACrearMapaTrampas::StaticClass());

	
}

// Called every frame
void AFacade_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacade_Main::ActivarTrampa()
{
	MazeBuilder->FullMaze();
	MapaCannons->CrearMapaCannons();
	MapaTrampas->CrearMapaTrampas();
}

