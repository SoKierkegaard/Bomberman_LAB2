// Fill out your copyright notice in the Description page of Project Settings.


#include "Composite_Enemy.h"
#include "Armas_Enemigo.h"
#include "CuerpoEnemigo.h"

// Sets default values
AComposite_Enemy::AComposite_Enemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AComposite_Enemy::BeginPlay()
{
	Super::BeginPlay();
	InitPartes();
}

// Called every frame
void AComposite_Enemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AComposite_Enemy::InitPartes()
{
	Armas = GetWorld()->SpawnActor<AArmas_Enemigo>(AArmas_Enemigo::StaticClass(), GetActorLocation(), GetActorRotation());
	Cuerpo = GetWorld()->SpawnActor<ACuerpoEnemigo>(ACuerpoEnemigo::StaticClass(), GetActorLocation(), GetActorRotation());
}

void AComposite_Enemy::DestroyParts()
{
	Armas->DestroyParts();
	Cuerpo->DestroyParts();
	Destroy();
}

