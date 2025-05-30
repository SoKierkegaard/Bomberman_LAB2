// Fill out your copyright notice in the Description page of Project Settings.

#include "Bomb.h"
#include "Explosion.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ABomb::ABomb()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBomb = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBomb"));
	MallaBomb->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBomb(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaBomb.Succeeded())
	{
		MallaBomb->SetStaticMesh(ObjetoMallaBomb.Object);
	}


	//PATRON DE DISEÑO SINGLETON
	//TArray<AActor*> Instances;
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABomb::StaticClass(), Instances);
	//if (Instances.Num() >= 1)
	//{
	//	//If exist at least one of them, set the instance with the first found one
	//	Instance = Cast<ABomb>(Instances[0]);
	//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s already exists"), *Instance->GetName()));
	//	//Then Destroy this Actor
	//	Destroy();
	//}
}

// Called when the game starts or when spawned
void ABomb::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Disparar, this, &ABomb::Shoot, 5.0f, false); // Dispara cada 5 segundos
}

// Called every frame
void ABomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABomb::Shoot()
{
	Direcciones = {
		FVector(1, 0, 0),   
		FVector(-1, 0, 0),  
		FVector(0, 1, 0),   
		FVector(0, -1, 0)   
	};

	for (const FVector& Dir : Direcciones)
	{
		AExplosion* NuevaExplosion = GetWorld()->SpawnActor<AExplosion>(GetActorLocation(), FRotator::ZeroRotator);
		if (NuevaExplosion)
		{
			NuevaExplosion->MoveDirection = Dir;
		}
	}
	Destroy();
}

