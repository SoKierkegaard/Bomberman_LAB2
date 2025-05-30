
#include "Explosion.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include <Kismet/GameplayStatics.h>
#include "GameFramework/Character.h"

AExplosion::AExplosion()
{
    PrimaryActorTick.bCanEverTick = true;

    ExplosionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExplosionMesh"));
    RootComponent = ExplosionMesh;

    ConstructorHelpers::FObjectFinder<UStaticMesh> ExplosionMeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (ExplosionMeshAsset.Succeeded())
    {
        ExplosionMesh->SetStaticMesh(ExplosionMeshAsset.Object);
        ExplosionMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }

    ConstructorHelpers::FObjectFinder<UMaterial> MaterialExplosionAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
    if (MaterialExplosionAsset.Succeeded())
    {
        ExplosionMesh->SetMaterial(0, MaterialExplosionAsset.Object);
    }

    ExplosionMesh->SetSimulatePhysics(false);
    ExplosionMesh->SetEnableGravity(false);

    ExplosionMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    ExplosionMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
    ExplosionMesh->SetGenerateOverlapEvents(true);

    ExplosionMesh->OnComponentBeginOverlap.AddDynamic(this, &AExplosion::OnOverlapBegin);
}

void AExplosion::BeginPlay()
{
    Super::BeginPlay();

    InitialPosition = GetActorLocation();
}

void AExplosion::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    CurrentPosition = GetActorLocation();
    DeltaMove = MoveDirection.GetSafeNormal() * MoveSpeed * DeltaTime;
    NewPosition = CurrentPosition + DeltaMove;
    SetActorLocation(NewPosition);

    TraveledDistance = FVector::Dist(InitialPosition, NewPosition);

    if (TraveledDistance >= TargetDistance)
    {
        Destroy();
    }
}

void AExplosion::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor != this)
    {
        if (OtherActor->IsA(ABloque::StaticClass()))
        {
            if (OtherActor->IsA(ABloqueAcero::StaticClass()))
            {
                OtherActor->Destroy();
                Destroy();
            }
            else
            {
                OtherActor->Destroy();
            }
        }
        else if (OtherActor->IsA(ACharacter::StaticClass()))
        {
            OtherActor->Destroy();
        }
    }
}
