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

    // Distancia m�xima de movimiento desde la posici�n inicial
    float DistanciaMaxima;

    // Posici�n inicial del enemigo
    FVector PosicionInicial;

    // Determina si el enemigo est� avanzando o regresando
    bool bAvanzandoHaciaLimite;

    // M�todo para mover al enemigo por el mapa
    void MoverEnemigo(float DeltaTime);

};
