#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Projectile.h"
#include "Components/SphereComponent.h"
#include "Sound/SoundBase.h"
#include "EnemyA.generated.h"

UCLASS()
class WOLJAWHACKATHON_API AEnemyA : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AEnemyA();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    /** Base component of the turret */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret Components")
    UStaticMeshComponent* TurretBase;

    /** Rotating gun component of the turret */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret Components")
    UStaticMeshComponent* TurretGun;

    /** Detection range component */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection")
    USphereComponent* DetectionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection")
    USceneComponent* SpawnPoint;

    /** Sound to play when firing */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    USoundBase* FireSound;

    /** Projectile class to spawn when firing */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    TSubclassOf<class AProjectile> ProjectileClass;

    /** Radius of the detection sphere */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection")
    float DetectionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection")
    float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection")
    float CurrentHealth;

    /** Rate of fire for the turret (seconds) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
    float FireRate;

    /** Speed at which the gun rotates to face the target (degrees per second) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret")
    float GunRotationSpeed;

private:
    /** Timer handle for firing */
    FTimerHandle FireTimerHandle;

    /** Current target actor */
    AActor* TargetActor;

    /** Detect potential targets in range */
    void DetectTarget();

    /** Rotate the turret gun towards the target */
    void RotateTurret(float DeltaTime);

    /** Fire at the locked target */
    void FireAtTarget();

    /** Called when an actor enters the detection range */
    UFUNCTION()
    void OnDetectionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    /** Called when an actor exits the detection range */
    UFUNCTION()
    void OnDetectionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
