#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Explosion.generated.h"

UCLASS()
class BOMBERMAN_LAB_API AExplosion : public AActor
{
    GENERATED_BODY()

public:
    AExplosion();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* ExplosionMesh;

	FVector InitialPosition;
	FVector NewPosition;

    UFUNCTION()
    void OnOverlapBegin(
        UPrimitiveComponent* OverlappedComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult
    );
public:

	float MoveSpeed = 500.0f;
	float TraveledDistance = 0.0f;
	float TimeToDestroy = 2.0f;
	float TargetDistance = 500.0f;

    FVector MoveDirection = FVector(1, 0, 0);
    FVector CurrentPosition;
    FVector DeltaMove;

};