// Fill out your copyright notice in the Description page of Project Settings.


#include "TestSingleton.h"
#include "Generador.h"
#include "Bomb.h"

// Sets default values
ATestSingleton::ATestSingleton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//RootComponent = MeshComp;
	MallaBloque->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	if (ObjetoMallaBloque.Succeeded())
	{
		MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);
	}

}

// Called when the game starts or when spawned
void ATestSingleton::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ATestSingleton::GenerarBloque, 2.f, true);
}

// Called every frame
void ATestSingleton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

void ATestSingleton::GenerarBloque()
{
	/*
	FVector Location = GetActorLocation();
	FVector RandomLocation = Location + FVector(FMath::RandRange(-500.f, 500.f), FMath::RandRange(-500.f, 500.f), 0);

	AGenerador* SpawnedActor = GetWorld()->SpawnActor<AGenerador>(AGenerador::StaticClass(), RandomLocation, FRotator(0, 0, 0));

	if (SpawnedActor)
	{
		Generador = SpawnedActor;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("%s has been created"), *Generador->GetName()));
	}
	*/

	/*
	if (Bomba)
	{
		Bomba->Destroy();
		Bomba = nullptr;
	}
	*/

	FVector Location = GetActorLocation();
	FVector RandomLocation = Location + FVector(FMath::RandRange(-500.f, 500.f), FMath::RandRange(-500.f, 500.f), 0);
	ABomb* SpawnedActor = GetWorld()->SpawnActor<ABomb>(ABomb::StaticClass(), RandomLocation, FRotator(0, 0, 0));

	if (SpawnedActor)
	{
		Bomba = SpawnedActor;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("%s has been created"), *Bomba->GetName()));
	}

}

