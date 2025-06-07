// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IPartes_Enemigo.h"
#include "GameFramework/Actor.h"
#include "Composite_Enemy.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AComposite_Enemy : public AActor, public IIPartes_Enemigo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComposite_Enemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// METODOS DE IIPartes_Enemigo
	virtual void InitPartes() override;
	virtual void DestroyParts() override;

	class AArmas_Enemigo* Armas;
	class ACuerpoEnemigo* Cuerpo;
};
