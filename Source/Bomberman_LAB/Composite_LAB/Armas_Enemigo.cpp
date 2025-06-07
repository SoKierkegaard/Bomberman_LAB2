// Fill out your copyright notice in the Description page of Project Settings.


#include "Armas_Enemigo.h"
#include "Mortar_Enemigo.h"
#include "Rifle_Enemigo.h"

// Sets default values
AArmas_Enemigo::AArmas_Enemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmas_Enemigo::BeginPlay()
{
	Super::BeginPlay();
	InitPartes();
}

// Called every frame
void AArmas_Enemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArmas_Enemigo::InitPartes()
{
	Mortar=GetWorld()->SpawnActor<AMortar_Enemigo>(AMortar_Enemigo::StaticClass(), GetActorLocation(), GetActorRotation());
	Rifle=GetWorld()->SpawnActor<ARifle_Enemigo>(ARifle_Enemigo::StaticClass(), GetActorLocation(), GetActorRotation());
}

void AArmas_Enemigo::DestroyParts()
{
	Mortar->Destroy();
	Rifle->Destroy();
	Destroy();
}

