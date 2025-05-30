// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"
#include "Enemigo.h"
#include "EnemigoAereo.h"
#include "EnemigoSubterraneo.h"
#include "EnemigoSubterraneo2.h"
#include "EnemigoTerrestre.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaCannon"));
	SpawnerMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoSpawnerMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoSpawnerMesh.Succeeded())
	{
		SpawnerMesh->SetStaticMesh(ObjetoSpawnerMesh.Object);
	}
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_SpawnEnemy, this, &AEnemySpawner::SpawnEnemy, 10.0f, true);
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemySpawner::SpawnEnemy()
{
	int32 TipoEnemigo = FMath::RandRange(0, 3); // Genera un número aleatorio entre 0 y 3
	switch (TipoEnemigo)
	{
	case 0:
		GetWorld()->SpawnActor<AEnemigoAereo>(GetActorLocation(), FRotator::ZeroRotator);
		break;
	case 1:
		GetWorld()->SpawnActor<AEnemigoSubterraneo2>(GetActorLocation(), FRotator::ZeroRotator);
		break;
	case 2:
		GetWorld()->SpawnActor<AEnemigoSubterraneo>(GetActorLocation(), FRotator::ZeroRotator);
		break;
	case 3:
		GetWorld()->SpawnActor<AEnemigoTerrestre>(GetActorLocation(), FRotator::ZeroRotator);
		break;
	default:
		break;
	}
}