// Fill out your copyright notice in the Description page of Project Settings.


#include "Generador.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGenerador::AGenerador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	//RootComponent = MeshComp;
	MallaBloque->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (ObjetoMallaBloque.Succeeded())
	{
		MallaBloque->SetStaticMesh(ObjetoMallaBloque.Object);
	}

	TArray<AActor*> Instances;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),AGenerador::StaticClass(), Instances);
	if (Instances.Num() >= 1)
	{
		//If exist at least one of them, set the instance with the first found one
		Instance = Cast<AGenerador>(Instances[0]);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("%s already exists"), *Instance->GetName()));
		//Then Destroy this Actor
		Destroy();
	}
}

// Called when the game starts or when spawned
void AGenerador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGenerador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

