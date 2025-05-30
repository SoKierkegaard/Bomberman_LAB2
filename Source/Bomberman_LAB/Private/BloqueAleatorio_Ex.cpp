// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAleatorio_Ex.h"

ABloqueAleatorio_Ex::ABloqueAleatorio_Ex()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void ABloqueAleatorio_Ex::BeginPlay()
{
    Super::BeginPlay();
    PosicionInicial = GetActorLocation();
    ElegirDireccionAleatoria();

    // Configurar temporizador para cambiar dirección cada 10 segundos
    GetWorld()->GetTimerManager().SetTimer(TimerHandle_CambioDireccion, this, &ABloqueAleatorio_Ex::ElegirDireccionAleatoria, 5.0f,true);
}

void ABloqueAleatorio_Ex::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector PosActual = GetActorLocation();
    FVector Offset = DireccionMovimiento * Velocidad * DeltaTime;//Calcula cuanto se mueve en cada frame

    FVector NuevaPos = PosActual + Offset;
    float Distancia = FVector::Dist(PosicionInicial, NuevaPos);

    if (Distancia >= DistanciaMaxima)
    {
        // Invertir dirección cuando llega al límite
        DireccionMovimiento *= -1;
        NuevaPos = PosActual + DireccionMovimiento * Velocidad * DeltaTime;
    }

    SetActorLocation(NuevaPos);
}

void ABloqueAleatorio_Ex::ElegirDireccionAleatoria()
{
    FVector DireccionAnterior = DireccionMovimiento;

    int Direccion = FMath::RandRange(0, 1); // 0: horizontal, 1: vertical
    int Sentido = FMath::RandBool() ? 1 : -1;

    if (Direccion == 0)
    {
        // Si ya se estaba moviendo horizontalmente, invertir sentido
        if (DireccionAnterior.X != 0)
            Sentido = -FMath::Sign(DireccionAnterior.X);

        DireccionMovimiento = FVector(Sentido, 0, 0);
    }
    else
    {
        // Si ya se estaba moviendo verticalmente, invertir sentido
        if (DireccionAnterior.Z != 0)
            Sentido = -FMath::Sign(DireccionAnterior.Z);

        DireccionMovimiento = FVector(0, 0, Sentido);
    }

    PosicionInicial = GetActorLocation();
}
