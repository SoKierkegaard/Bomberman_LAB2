// Fill out your copyright notice in the Description page of Project Settings.


#include "Director_Ejercito.h"

// Sets default values
ADirector_Ejercito::ADirector_Ejercito()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector_Ejercito::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector_Ejercito::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector_Ejercito::SetBuilder(AActor* NewBuilder)
{
	//Asignamos el Builder al Director
	Builder = Cast<IIBuilder_Ejercito>(NewBuilder);
	if (!Builder)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			TEXT("No se asigno Builder"));
	}
}

void ADirector_Ejercito::ConstructEjercitoCompleto()
{
	if (Builder)
	{
		Builder->ConstruirEjercitoCompleto();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se asigno un BUilder!"));
	}
}

void ADirector_Ejercito::ConstructSoldados()
{
	if (Builder)
	{
		Builder->ConstruirSoldados();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se asigno un BUilder!"));
	}
}

void ADirector_Ejercito::ConstructSoldadosYComandantes()
{
	if (Builder)
	{
		Builder->ConstruirSoldados();
		Builder->ConstruirComandantes();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se asigno un BUilder!"));
	}
}

void ADirector_Ejercito::ConstructComandantesYTanques()
{
	if (Builder)
	{
		Builder->ConstruirComandantes();
		Builder->ConstruirTanques();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se asigno un BUilder!"));
	}
}

void ADirector_Ejercito::ConstructSoldadosYTorretas()
{
	if (Builder)
	{
		Builder->ConstruirSoldados();
		Builder->ConstruirTorretas();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se asigno un BUilder!"));
	}
}

void ADirector_Ejercito::ConstructTanquesYTorretas()
{
	if (Builder)
	{
		Builder->ConstruirTanques();
		Builder->ConstruirTorretas();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se asigno un BUilder!"));
	}
}

void ADirector_Ejercito::GetEjercito()
{
	//Obtenemos el Ejercito 
	Builder->GetEjercito();
}