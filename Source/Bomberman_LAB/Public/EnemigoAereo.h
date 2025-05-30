// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAereo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API AEnemigoAereo : public AEnemigo
{
	GENERATED_BODY()
public:
    AEnemigoAereo();

protected:
    virtual void BeginPlay() override;


    // Velocidad de desplazamiento en el aire
    UPROPERTY(EditAnywhere, Category = "Movimiento")
    float VelocidadVuelo = 150.0f;
    float DistanciaMaxima = 500.0f;

    // Dirección de movimiento (1 = derecha, -1 = izquierda)
    int DireccionMovimiento = 1;

    // Guarda la posición inicial del enemigo
    FVector PosicionInicial;
public:
    virtual void Tick(float DeltaTime) override;
};
