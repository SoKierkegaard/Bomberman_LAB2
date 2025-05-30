// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomb.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ABomb : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABomb();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaBomb;

private:
	UPROPERTY()
	ABomb* Instance;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FTimerHandle TimerHandle_Disparar;
	void Shoot();

	TArray<FVector> Direcciones;
};
