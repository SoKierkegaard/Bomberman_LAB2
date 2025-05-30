// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman_LABGameMode.h"
#include "Bomberman_LABCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloquePrueba.h"
#include "BloqueBurbuja.h"
#include <Kismet/GameplayStatics.h>
#include "EnemigoLaberintoX.h"
#include "Enemigo.h"
#include "EnemySpawner.h"
#include "EnemigoAereo.h"
#include "EnemigoSubterraneo.h"
#include "EnemigoSubterraneo2.h"
#include "EnemigoTerrestre.h"
#include "CrearMapaTrampas.h"
#include "BombaEx.h"
#include "BloqueAleatorio_Ex.h"
#include "Bomba.h"
#include "Bomb.h"
#include "Builder_Test.h"
#include "IPrototype_Test.h"
#include "Maze_BuilderConcrete.h"


ABomberman_LABGameMode::ABomberman_LABGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	ClaseBomba = ABomb::StaticClass();

}

void ABomberman_LABGameMode::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* Controlador = GetWorld()->GetFirstPlayerController();
	if (Controlador)
	{
		Controlador->InputComponent->BindAction("SpawnBomba", IE_Pressed, this, &ABomberman_LABGameMode::SpawnBomba);
	}


	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

	//SpawnEnemigos();
	//GenerarLaberintoAleatorio();
	//GetWorld()->GetTimerManager().SetTimer(TimerHandle_Eliminar, this, &ABomberman_LABGameMode::EliminarEnemigo, 3.0f, true);
	//AleatorizarMapa(aMapaBloques);
	//SpawnLaberinto();
	// Creamos el cliente
	//GetWorld()->SpawnActor<ABuilder_Test>(ABuilder_Test::StaticClass());
	//SpawnBloqueMadera2();
	//SpawnJugadorEnCasillaLibre();
	GetWorld()->SpawnActor<ABloqueBurbuja>(
		ABloqueBurbuja::StaticClass(),
		FVector(1000.f, 1000.f, 0.f),
		FRotator::ZeroRotator
	);

	ABloqueBurbuja* OriginalBloque = GetWorld()->SpawnActor<ABloqueBurbuja>(
		ABloqueBurbuja::StaticClass(),
		FVector(1200.f, 1000.f, 0.f),
		FRotator::ZeroRotator
	);

	OriginalBloque->ActivarVisibilidad(true);

	//clonamos el bloque

	AActor* ClonBloque = OriginalBloque->Clone();

	ABloqueBurbuja* ClonBloqueDerivado = Cast<ABloqueBurbuja>(ClonBloque);
	if (ClonBloqueDerivado)
	{
		ClonBloqueDerivado->ActivarVisibilidad(true);
	}
	////Creamos el mapa Trampas
	//ACrearMapaTrampas*MapaTrampas = GetWorld()->SpawnActor<ACrearMapaTrampas>(
	//	ACrearMapaTrampas::StaticClass(),
	//	FVector(0.f, 0.f, 0.f),
	//	FRotator::ZeroRotator
	//);
	//MapaTrampas->CrearMapaTrampas();
	//AMaze_BuilderConcrete* MazeBuilder = GetWorld()->SpawnActor<AMaze_BuilderConcrete>(AMaze_BuilderConcrete::StaticClass());

	//MazeBuilder->FullMaze();


}

void ABomberman_LABGameMode::SpawnBomba()
{
	if (ClaseBomba && GetWorld())
	{
		// Obtener el personaje controlado
		ABomberman_LABCharacter* Personaje = Cast<ABomberman_LABCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		if (Personaje)
		{
			// Obtener la posici n y la orientaci n del personaje
			FVector PosicionPersonaje = Personaje->GetActorLocation();
			FRotator RotacionPersonaje = Personaje->GetActorRotation();
			PosicionPersonaje.Z = 0.f; // Ajustar la altura de la bomba

			// Calcular la ubicaci n delante del personaje
			FVector DireccionFrente = RotacionPersonaje.Vector(); // Vector hacia adelante
			FVector UbicacionSpawn = PosicionPersonaje + (DireccionFrente * 200.0f); // Ajusta la distancia (200.0f en este caso)

			// Rotaci n para la bomba (opcional, puede ser igual a la del personaje)
			FRotator RotacionSpawn = RotacionPersonaje;

			// Spawnear la bomba
			AActor* BombaSpawneada = GetWorld()->SpawnActor<AActor>(ClaseBomba, UbicacionSpawn, RotacionSpawn);
			if (BombaSpawneada)
			{
				UE_LOG(LogTemp, Warning, TEXT(" Bomba spawneada frente al personaje en %s!"), *UbicacionSpawn.ToString());
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ClaseBomba no est  configurada."));
	}
}

void ABomberman_LABGameMode::SpawnLaberinto()
{
	int32 MaxAltura = 1;
	float DistanciaEntreBloques = 0.0f; // Espaciado entre bloques

	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			int32 valor = aMapaBloques[fila][columna];

			bool debeSpawnear = false;

			if (!bloqueignorado)
			{
				debeSpawnear = true;
			}
			else if (valor != 0 && valor != 4)
			{
				debeSpawnear = true;
			}

			if (debeSpawnear)
			{
				for (int32 altura = 0; altura < MaxAltura; ++altura)
				{
					FVector posicionBloque = FVector(
						XInicial + columna * (AnchoBloque + DistanciaEntreBloques),
						YInicial + fila * (LargoBloque + DistanciaEntreBloques),
						ZInicial + altura * AlturaBloque
					);

					SpawnBloque(posicionBloque, valor);
				}
			}
		}
	}

	bloqueignorado = true; // Para que no vuelva a generar los mismos bloques
}

void ABomberman_LABGameMode::SpawnBloque(FVector posicionBloque, int32 tipoBloque)
{
	ABloque* BloqueGenerado = nullptr;

	switch (tipoBloque)
	{
	case 4:
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		break;

	case 3:
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		break;

	case 2:
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		break;

	case 1:
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
		break;

	default:
		// Tipo de bloque no v lido o es 0 (espacio vac o)
		return;
	}

	// Agregar el bloque al array si se gener  correctamente
	if (BloqueGenerado)
	{
		aBloques.Add(BloqueGenerado);
	}
}

void ABomberman_LABGameMode::SpawnJugadorEnCasillaLibre()
{
	TArray<FVector> posicionesLibres;// Almacena las posiciones libres en el mapa(ceros)
	// Buscar una posici n libre en el mapa
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			if (aMapaBloques[fila][columna] == 0) // Si la posici n est  libre
			{
				FVector posicionLibre = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, ZInicial + AlturaBloque);

				posicionesLibres.Add(posicionLibre);
			}
		}
	}

	if (posicionesLibres.Num() > 0)
	{
		int32 Aleatorio = FMath::RandRange(0, posicionesLibres.Num() - 1);
		FVector posicionAleatoria = posicionesLibres[Aleatorio];

		APawn* jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (jugador)
		{
			jugador->SetActorLocation(posicionAleatoria);
		}
	}
}

void ABomberman_LABGameMode::SpawnEnemigos()
{
	TArray<TSubclassOf<AEnemigo>> ClasesDeEnemigos = {
	AEnemigoAereo::StaticClass(),
	AEnemigoSubterraneo::StaticClass(),
	AEnemigoSubterraneo2::StaticClass(),
	AEnemigoTerrestre::StaticClass()
	};
	FVector PosicionBase(500.f, 500.f, 100.f);
	float Offset = 300.f;
	int32 CantidadEnemigos = 20;

	for (int32 i = 0; i < CantidadEnemigos; ++i)
	{
		FVector PosicionSpawn = PosicionBase + FVector(i * Offset, 0.f, 0.f);
		int32 Index = FMath::RandRange(0, ClasesDeEnemigos.Num() - 1);
		AEnemigo* Enemigo = GetWorld()->SpawnActor<AEnemigo>(ClasesDeEnemigos[Index], PosicionSpawn, FRotator::ZeroRotator);
		if (Enemigo)
		{
			EnemigosSpawneados.Add(Enemigo);

			FString Nombre = Enemigo->GetName();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Spawneado: %s"), *Nombre));
		}
	}
}

void ABomberman_LABGameMode::ChangeBloque()
{
	// Destruir los bloques existentes
	for (ABloque* Bloque : aBloques)
	{
		if (Bloque)
		{
			Bloque->Destroy(); // Destruir el bloque
		}
	}

	// Limpiar el array de bloques
	aBloques.Empty();

	// Recorrer todas las posiciones del mapa y cambiar los valores de los bloques
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			int32 valorCasilla = aMapaBloques[fila][columna];
			if (valorCasilla == 1 || valorCasilla == 2 || valorCasilla == 3) // Si la casilla tiene un bloque tipo 1, 2 o 3
			{
				// Generar un nuevo valor aleatorio entre 1 y 3 para el bloque
				int32 bloquenuevo = FMath::RandRange(1, 3);
				// Asignar el nuevo valor aleatorio a la posici n correspondiente
				aMapaBloques[fila][columna] = bloquenuevo;
			}
		}
	}

	// Volver a generar el mapa con los nuevos valores
	SpawnLaberinto();
}

void ABomberman_LABGameMode::GenerarEnemigos()
{
	TArray<FVector> posicionesLibres;
	TArray<int32> posicionFilas;

	// Buscar una posici n libre en el mapa
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			if (aMapaBloques[fila][columna] == 0) // Si la posici n est  libre
			{
				FVector posicionLibre = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, ZInicial + AlturaBloque); // Un poco arriba del suelo

				posicionesLibres.Add(posicionLibre);

				posicionFilas.Add(fila);
			}
		}
	}
	// Generar enemigos en posiciones aleatorias
	if (posicionesLibres.Num() > 0)
	{
		int32 Aleatorio = FMath::RandRange(0, posicionesLibres.Num() - 1);
		FVector posicionAleatoria = posicionesLibres[Aleatorio];
		GetWorld()->SpawnActor<AEnemigoLaberintoX>(posicionAleatoria, FRotator::ZeroRotator);
	}

}

void ABomberman_LABGameMode::EliminarEnemigo()
{
	// Selecciona un  ndice aleatorio del array
	int32 Index = FMath::RandRange(0, EnemigosSpawneados.Num() - 1);

	AEnemigo* Enemigo = EnemigosSpawneados[Index];
	if (Enemigo)
	{
		Enemigo->Destroy(); // Destruye el actor del mundo
		EnemigosSpawneados.RemoveAt(Index); // Lo elimina del array
		EnemigosEliminados++;

		if (EnemigosEliminados >= TotalEnemigosIniciales / 2)
		{
			GetWorld()->GetTimerManager().ClearTimer(TimerHandle_Eliminar);
		}
	}
}

void ABomberman_LABGameMode::GenerarLaberintoAleatorio()
{
	int32 filas = aMapaBloques.Num();
	int32 columnas = aMapaBloques[0].Num();
	int32 BloquesRequeridos = (filas - 2) * (columnas - 2) * 0.2;

	TArray<FVector> posicionesDisponibles;

	//Spawn bordes
	for (int32 fila = 0; fila < filas; ++fila)
	{
		for (int32 columna = 0; columna < columnas; ++columna)
		{
			if (fila == 0 || fila == filas - 1 || columna == 0 || columna == columnas - 1)
			{
				aMapaBloques[fila][columna] = 4;

				FVector posicion = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, ZInicial + AlturaBloque);
				SpawnBloque(posicion, 4); // Bloque indestructible
			}
			else
			{
				aMapaBloques[fila][columna] = 0;

				// Solo las posiciones interiores se guardan
				FVector posicion = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, ZInicial + AlturaBloque);
				posicionesDisponibles.Add(posicion);
			}
		}
	}

	// Seleccionamos aleatoriamente el 20% de las posiciones disponibles
	int32 bloquesGenerados = 0;
	int32 totalPosiciones = posicionesDisponibles.Num();

	while (bloquesGenerados < BloquesRequeridos && bloquesGenerados < totalPosiciones)
	{
		// Seleccionar una posicion aleatoria dentro de las posiciones disponibles
		int32 posicionAleatorio = FMath::RandRange(0, posicionesDisponibles.Num() - 1);

		// Obtener la posici n seleccionada
		FVector posicionSeleccionada = posicionesDisponibles[posicionAleatorio];

		// Determinamos las coordenadas fila y columna de esa posici n
		int32 columna = (posicionSeleccionada.X - XInicial) / AnchoBloque;
		int32 fila = (posicionSeleccionada.Y - YInicial) / LargoBloque;

		// Si la posici n no tiene bloque indestructible, asignamos un nuevo bloque aleatorio
		if (aMapaBloques[fila][columna] != 4)
		{
			int32 tipoBloque = FMath::RandRange(1, 3); // Elegir aleatoriamente un tipo de bloque
			aMapaBloques[fila][columna] = tipoBloque;

			// Spawn del bloque en la posici n
			SpawnBloque(posicionSeleccionada, tipoBloque);

			// Incrementar el contador de bloques generados
			bloquesGenerados++;

			// Eliminar la posici n seleccionada de las posiciones disponibles para evitar repetirla
			posicionesDisponibles.RemoveAt(posicionAleatorio);
		}
	}
}

void ABomberman_LABGameMode::SpawnBloqueMadera()
{
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			if (aMapaBloques[fila][columna] == 1)
			{
				FVector ubicacion = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, ZInicial + AlturaBloque);
				aBloquesMadera.Add(ubicacion);
			}
			if (aMapaBloques[fila][columna] == 4)
			{
				FVector ubicacion = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, ZInicial + AlturaBloque);
				aBloquesBorde.Add(ubicacion);
			}
		}
	}
	float DistanciaMinima = FLT_MAX;
	for (FVector BloqueMadera : aBloquesMadera)
	{
		float DistanciaMasCercanaABorde = FLT_MAX;

		for (FVector Borde : aBloquesBorde)
		{
			float Distancia = FVector::Dist(BloqueMadera, Borde);
			if (Distancia < DistanciaMasCercanaABorde)
			{
				DistanciaMasCercanaABorde = Distancia;
			}
		}
		if (DistanciaMasCercanaABorde < DistanciaMinima)
		{
			DistanciaMinima = DistanciaMasCercanaABorde;
			PosValidas.Empty();
			PosValidas.Add(BloqueMadera);
		}
		else if (DistanciaMasCercanaABorde == DistanciaMinima)
		{
			PosValidas.Add(BloqueMadera);
		}
	}

	if (PosValidas.Num() > 0)
	{
		int32 Aleatorio = FMath::RandRange(0, PosValidas.Num() - 1);
		PosValidas[Aleatorio].Z += 250.0f; // Eleva la posici n Z para que el jugador no est  dentro del bloque
		FVector posicionAleatoria = PosValidas[Aleatorio];

		APawn* jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (jugador)
		{
			jugador->SetActorLocation(posicionAleatoria);
		}
	}
}

void ABomberman_LABGameMode::SpawnBloqueMadera2()
{
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			if (aMapaBloques[fila][columna] == 1)
			{
				FVector ubicacion = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, ZInicial + AlturaBloque);
				aBloquesMadera.Add(ubicacion);
			}
			if (aMapaBloques[fila][columna] == 4)
			{
				FVector ubicacion = FVector(XInicial + columna * AnchoBloque, YInicial + fila * LargoBloque, ZInicial + AlturaBloque);
				aBloquesBorde.Add(ubicacion);
			}
		}
	}

	// Calcular el centro del mapa
	float centroX = XInicial + (aMapaBloques[0].Num() - 1) * AnchoBloque / 2.0f;
	float centroY = YInicial + (aMapaBloques.Num() - 1) * LargoBloque / 2.0f;
	FVector centroMapa(centroX, centroY, ZInicial + AlturaBloque);

	// Buscar los bloques de madera m s cercanos al centro
	float DistanciaMinima = FLT_MAX;
	PosValidas.Empty();

	for (FVector BloqueMadera : aBloquesMadera)
	{
		float Distancia = FVector::Dist(BloqueMadera, centroMapa);
		if (Distancia < DistanciaMinima)
		{
			DistanciaMinima = Distancia;
			PosValidas.Empty();
			PosValidas.Add(BloqueMadera);
		}
		else if (Distancia == DistanciaMinima)
		{
			PosValidas.Add(BloqueMadera);
		}
	}

	if (PosValidas.Num() > 0)
	{
		int32 Aleatorio = FMath::RandRange(0, PosValidas.Num() - 1);
		PosValidas[Aleatorio].Z += 250.0f;

		APawn* jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (jugador)
		{
			jugador->SetActorLocation(PosValidas[Aleatorio]);
		}
	}
}

void ABomberman_LABGameMode::AleatorizarMapa(TArray<TArray<int32>>& Mapa)
{
	const int32 Altura = Mapa.Num();
	if (Altura == 0) return;

	const int32 Ancho = Mapa[0].Num();

	const int32 CentroFila = Altura / 2;
	const int32 CentroCol = Ancho / 2;

	// Define un  rea segura central de 5x5
	const int32 Margen = 2;

	for (int32 Fila = 0; Fila < Altura; ++Fila)
	{
		for (int32 Columna = 0; Columna < Ancho; ++Columna)
		{
			// Evitar el  rea central
			if (Fila >= CentroFila - Margen && Fila <= CentroFila + Margen &&
				Columna >= CentroCol - Margen && Columna <= CentroCol + Margen)
			{
				continue;
			}

			if (Mapa[Fila][Columna] != 4)
			{
				Mapa[Fila][Columna] = FMath::RandRange(0, 1);
			}
		}
	}
}

