// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IPartes_Enemigo.h"
#include "GameFramework/Actor.h"
#include "Armas_Enemigo.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AArmas_Enemigo : public AActor, public IIPartes_Enemigo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmas_Enemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// METODOS DE IIPartes_Enemigo
	virtual void InitPartes() override;
	virtual void DestroyParts() override;

	class AMortar_Enemigo* Mortar;
	class ARifle_Enemigo* Rifle;

};
