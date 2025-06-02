// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IBuilder_Ejercito.h"
#include "GameFramework/Actor.h"
#include "Director_Ejercito.generated.h"

UCLASS()
class BOMBERMAN_LAB_API ADirector_Ejercito : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector_Ejercito();

private:
	IIBuilder_Ejercito* Builder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetBuilder(AActor* NewBuilder);

	void ConstructEjercitoCompleto();
	void ConstructSoldados();
	void ConstructSoldadosYComandantes();
	void ConstructComandantesYTanques();
	void ConstructSoldadosYTorretas();
	void ConstructTanquesYTorretas();

	void GetEjercito();
};
