// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ABomba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomba();
	// Componente de malla estática para el bloque
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Malla")
	UStaticMeshComponent* MallaBomba;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ExplosionMesh;

	FVector InitialPosition;
	FVector NewPosition;
	FVector PosicionInicial;
	float DistanciaObjetivo = 3000.0f;

	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);

};
