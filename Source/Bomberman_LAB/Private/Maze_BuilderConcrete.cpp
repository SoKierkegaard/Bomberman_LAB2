// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze_BuilderConcrete.h"
#include "Maze_Test.h"
#include "BloqueMadera.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueBurbuja.h"
#include "Bala.h"


// Sets default values
AMaze_BuilderConcrete::AMaze_BuilderConcrete()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AMaze_BuilderConcrete::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the maze test actor
	MazeTest = GetWorld()->SpawnActor<AMaze_Test>(AMaze_Test::StaticClass());
}

// Called every frame
void AMaze_BuilderConcrete::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMaze_BuilderConcrete::BuildWoods()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType != 0 && BlockType!=4) {
					GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial), FRotator::ZeroRotator);
				}
			}
		}
	}
	
}

void AMaze_BuilderConcrete::BuildConcrete()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType == 4) {
					GetWorld()->SpawnActor<ABloqueConcreto>(
						ABloqueConcreto::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::BuildSteel()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType != 0 && BlockType != 4) {
					GetWorld()->SpawnActor<ABloqueAcero>(
						ABloqueAcero::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::BuildBrick()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType != 0 && BlockType!=4) {
					GetWorld()->SpawnActor<ABloqueLadrillo>(
						ABloqueLadrillo::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::BuildPuertas()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaPuertas.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaPuertas[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaPuertas[i][j];
				if (BlockType ==6) {
					GetWorld()->SpawnActor<ABala>(
						ABala::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::BuildVidrios()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaVidrios.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaVidrios[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaVidrios[i][j];
				if (BlockType == 5) {
					GetWorld()->SpawnActor<ABloqueBurbuja>(
						ABloqueBurbuja::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}

void AMaze_BuilderConcrete::FullMaze()
{
	if (MazeTest)
	{
		for (int32 i = 0; i < MazeTest->aMapaBloques.Num(); i++)
		{
			for (int32 j = 0; j < MazeTest->aMapaBloques[i].Num(); j++)
			{
				int32 BlockType = MazeTest->aMapaBloques[i][j];
				if (BlockType == 1) {
					GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial), FRotator::ZeroRotator);
				}
				else if (BlockType == 2) {
					GetWorld()->SpawnActor<ABloqueConcreto>(
						ABloqueConcreto::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
				else if (BlockType == 3) {
					GetWorld()->SpawnActor<ABloqueAcero>(
						ABloqueAcero::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
				else if (BlockType == 4) {
					GetWorld()->SpawnActor<ABloqueLadrillo>(
						ABloqueLadrillo::StaticClass(),
						FVector(MazeTest->XInicial + i * 100, MazeTest->YInicial + j * 100, MazeTest->ZInicial),
						FRotator::ZeroRotator);
				}
			}
		}
	}
}
