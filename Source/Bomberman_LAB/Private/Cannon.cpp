// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"
#include "Bala.h"
#include "Bomba.h"

// Sets default values
ACannon::ACannon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MallaCannon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaCannon"));
	MallaCannon->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaCannon(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaCannon.Succeeded())
	{
		MallaCannon->SetStaticMesh(ObjetoMallaCannon.Object);
	}
}

// Called when the game starts or when spawned
void ACannon::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Disparar, this, &ACannon::Disparar, 5.0f, true);// Dispara cada segundo
}

// Called every frame
void ACannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACannon::Disparar()
{
	ABala* Bomba = GetWorld()->SpawnActor<ABala>(GetActorLocation(), FRotator::ZeroRotator);
}
	

