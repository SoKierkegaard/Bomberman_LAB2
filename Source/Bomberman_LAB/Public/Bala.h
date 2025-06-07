// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bala.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ABala : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABala();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	FVector PosicionInicial;
	float DistanciaObjetivo = 3000.0f;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaCannon;

	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

public:
	bool DireccionConseguida;
	FVector PosicionJugador;
};
