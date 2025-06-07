// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder_EX.h"
#include "Ejercito.h"
#include "Enemigo_Comun.h"
#include "Comandante.h"
#include "Tanques.h"
#include "Cannon.h"

// Sets default values
ABuilder_EX::ABuilder_EX()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_EX::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuilder_EX::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilder_EX::ConstruirEjercitoCompleto()
{
	// Llamamos a los métodos para construir cada tipo de unidad del ejercito
	/*
	ConstruirSoldados();
	ConstruirComandantes();
	ConstruirTanques();
	ConstruirTorretas();
	*/
}

void ABuilder_EX::ConstruirSoldados(int32 cantidad)
{
	int contador = 0;
	if (Ejercito) // Comprobamos que el Ejercito no sea nulo antes de intentar acceder a sus propiedades
	{
		// Recorremos las posiciones de los soldados y los creamos en el mundo
		for (int32 i = 0; i < Ejercito->PosicionesSoldados.Num(); i++)
		{
			for (int32 j = 0; j < Ejercito->PosicionesSoldados[i].Num(); j++)
			{
				int32 Tropa = Ejercito->PosicionesSoldados[i][j];
				
				if (Tropa == 1 && contador <= cantidad) {
					GetWorld()->SpawnActor<AEnemigo_Comun>(AEnemigo_Comun::StaticClass(),
						FVector(Ejercito->XInicial + i * Ejercito->EspacioEntreUnidades,
							Ejercito->YInicial + j * Ejercito->EspacioEntreUnidades,
							Ejercito->ZInicial), FRotator::ZeroRotator);
					contador++;
				}
			}
		}
	}
}

void ABuilder_EX::ConstruirComandantes(int32 cantidad)
{
	int contador = 0;
	if (Ejercito)
	{
		// Recorremos las posiciones de los comandantes y los creamos en el mundo
		for (int32 i = 0; i < Ejercito->PosicionesComandantes.Num(); i++)
		{
			for (int32 j = 0; j < Ejercito->PosicionesComandantes[i].Num(); j++)
			{
				
				int32 Tropa = Ejercito->PosicionesComandantes[i][j];
				if (Tropa == 3 && contador <= cantidad) {
					GetWorld()->SpawnActor<AComandante>(AComandante::StaticClass(),
						FVector(Ejercito->XInicial + i * Ejercito->EspacioEntreUnidades,
							Ejercito->YInicial + j * Ejercito->EspacioEntreUnidades,
							Ejercito->ZInicial), FRotator::ZeroRotator);
					contador++;
				}
			}
		}
	}
}

void ABuilder_EX::ConstruirTanques(int32 cantidad)
{
	int contador = 0;
	if (Ejercito)
	{
		// Recorremos las posiciones de los tanques y los creamos en el mundo
		for (int32 i = 0; i < Ejercito->PosicionesTanques.Num(); i++)
		{
			for (int32 j = 0; j < Ejercito->PosicionesTanques[i].Num(); j++)
			{
				
				int32 Tropa = Ejercito->PosicionesTanques[i][j];
				if (Tropa == 2 && contador <= cantidad) {
					GetWorld()->SpawnActor<ATanques>(ATanques::StaticClass(),
						FVector(Ejercito->XInicial + i * Ejercito->EspacioEntreUnidades,
							Ejercito->YInicial + j * Ejercito->EspacioEntreUnidades,
							Ejercito->ZInicial), FRotator::ZeroRotator);
					contador++;
				}
			}
		}
	}
}

void ABuilder_EX::ConstruirTorretas(int32 cantidad)
{
	int contador = 0;
	if (Ejercito)
	{
		// Recorremos las posiciones de las torretas y las creamos en el mundo
		for (int32 i = 0; i < Ejercito->PosicionesTorretas.Num(); i++)
		{
			for (int32 j = 0; j < Ejercito->PosicionesTorretas[i].Num(); j++)
			{
				
				int32 Tropa = Ejercito->PosicionesTorretas[i][j];
				if (Tropa == 4 && contador <= cantidad) {
					GetWorld()->SpawnActor<ACannon>(ACannon::StaticClass(),
						FVector(Ejercito->XInicial + i * Ejercito->EspacioEntreUnidades,
							Ejercito->YInicial + j * Ejercito->EspacioEntreUnidades,
							Ejercito->ZInicial + 500.f), FRotator::ZeroRotator);
					contador++;
				}
			}
		}
	}
}


AEjercito* ABuilder_EX::GetEjercito()
{
	return Ejercito;

}
void ABuilder_EX::Ejercito1()
{
	ConstruirSoldados(1);
	ConstruirComandantes(2);
	ConstruirTorretas(3);
}

void ABuilder_EX::Ejercito2()
{
	ConstruirSoldados(1);
	ConstruirComandantes(1);
	ConstruirTorretas(0);
}

void ABuilder_EX::Ejercito3()
{
	ConstruirSoldados(6);
	ConstruirComandantes(0);
	ConstruirTorretas(3);
}

void ABuilder_EX::Ejercito4()
{
	ConstruirSoldados(6);
	ConstruirComandantes(1);
	ConstruirTorretas(0);
}
