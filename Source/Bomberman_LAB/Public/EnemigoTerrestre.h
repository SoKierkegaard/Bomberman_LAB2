// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestre.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_LAB_API AEnemigoTerrestre : public AEnemigo
{
	GENERATED_BODY()
public:
    AEnemigoTerrestre();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    // Velocidad del enemigo
    float VelocidadMovimiento;

    // Distancia máxima de movimiento desde la posición inicial
    float DistanciaMaxima;

    // Posición inicial del enemigo
    FVector PosicionInicial;

    // Determina si el enemigo está avanzando o regresando
    bool bAvanzandoHaciaLimite;

    // Método para mover al enemigo por el mapa
    void MoverEnemigo(float DeltaTime);

};
