#include "EnemyA.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values
AEnemyA::AEnemyA()
{
    PrimaryActorTick.bCanEverTick = true;

    // Turret Base
    TurretBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretBase"));
    RootComponent = TurretBase;

    // Turret Gun
    TurretGun = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretGun"));
    TurretGun->SetupAttachment(TurretBase);


    SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point"));
	SpawnPoint->SetupAttachment(TurretGun);

    // Detection Sphere
    DetectionRange = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionRange"));
    DetectionRange->SetupAttachment(RootComponent);

    // Default values
    DetectionRadius = 1000.0f;
    FireRate = 0.1f;
    GunRotationSpeed = 100.0f;

    DetectionRange->SetSphereRadius(DetectionRadius);

	MaxHealth = 100.0f; 
	CurrentHealth = MaxHealth; 
}

// Called when the game starts or when spawned
void AEnemyA::BeginPlay()
{
    Super::BeginPlay();

    DetectionRange->OnComponentBeginOverlap.AddDynamic(this, &AEnemyA::OnDetectionBeginOverlap);
    DetectionRange->OnComponentEndOverlap.AddDynamic(this, &AEnemyA::OnDetectionEndOverlap);
	DrawDebugSphere(GetWorld(), GetActorLocation(), DetectionRadius, 12, FColor::Green, true, 10.0f);


    GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &AEnemyA::FireAtTarget, FireRate, true);
}

// Called every frame
void AEnemyA::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (TargetActor && IsValid(TargetActor))
    {
        RotateTurret(DeltaTime);
    }
    else
    {
        TargetActor = nullptr; // Clear invalid targets
    }
}

// Detect potential targets
void AEnemyA::DetectTarget()
{
    TArray<AActor*> OverlappingActors;
    DetectionRange->GetOverlappingActors(OverlappingActors);

    AActor* ClosestTarget = nullptr;
    float ClosestDistance = DetectionRadius;

    for (AActor* Actor : OverlappingActors)
    {
        if (Actor && IsValid(Actor) && Actor != this)
        {
            float DistanceToActor = FVector::Dist(Actor->GetActorLocation(), GetActorLocation());
            if (DistanceToActor < ClosestDistance)
            {
                ClosestDistance = DistanceToActor;
                ClosestTarget = Actor;
            }
        }
    }

    TargetActor = ClosestTarget;
}

// Rotate the turret towards the target
void AEnemyA::RotateTurret(float DeltaTime)
{
    if (!TargetActor) return;

    // Get the turret gun's current rotation
    FRotator CurrentRotation = TurretGun->GetComponentRotation();

    // Calculate the direction vector to the target
    FVector DirectionToTarget = (TargetActor->GetActorLocation() - TurretGun->GetComponentLocation()).GetSafeNormal();

    // Get the desired rotation for the turret gun to face the target
    FRotator TargetRotation = DirectionToTarget.Rotation();

    // Lock rotation to Yaw only (horizontal rotation)
    TargetRotation.Pitch = 0.0f;
    TargetRotation.Roll = 0.0f;

    // Interpolate smoothly to the target rotation
    FRotator NewRotation = FMath::RInterpConstantTo(CurrentRotation, TargetRotation, DeltaTime, GunRotationSpeed);

    // Apply the new rotation to the turret gun
    TurretGun->SetWorldRotation(NewRotation);

	FVector StartLocation = TurretGun->GetComponentLocation();
    FVector EndLocation = StartLocation + DirectionToTarget * 500.0f;  


	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, 0.1f, 0, 2.0f);
	DrawDebugSphere(GetWorld(), TargetActor->GetActorLocation(), 50.0f, 12, FColor::Green, false, 0.1f, 0, 2.0f);


}


// Fire projectiles at the target
void AEnemyA::FireAtTarget()
{
    if (!TargetActor || !IsValid(TargetActor) || !ProjectileClass) return;

    // Spawn the projectile
    FVector MuzzleLocation = TurretGun->GetSocketLocation(FName("Muzzle")); // Ensure the gun has a socket named "Muzzle"
    FRotator MuzzleRotation = TurretGun->GetComponentRotation();

    AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnPoint->GetComponentLocation(), SpawnPoint->GetComponentRotation());
    if (Projectile)
    {
        Projectile->SetOwner(this);

        // Optional: Play a firing sound
        if (FireSound)
        {
            UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
        }
    }
}

// Handle overlaps for detection
void AEnemyA::OnDetectionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!TargetActor && OtherActor && OtherActor != this)
    {
        TargetActor = OtherActor; // Lock onto the first valid target
    }
}

void AEnemyA::OnDetectionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (TargetActor == OtherActor)
    {
        TargetActor = nullptr; // Clear the target if it leaves the detection radius
    }
}


float AEnemyA::TakeDamage(float DamageAmount,  struct FDamageEvent const & DamageEvent,  class AController * EventInstigator,  AActor * DamageCauser)
{

	CurrentHealth -= DamageAmount; 

	if(CurrentHealth <= 0)
	{
		Destroy();
	}
	return DamageAmount; 
}
