// Engineer.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "Engine/LocalPlayer.h"
#include "NiagaraSystem.h"
#include "Engine/TimerHandle.h"
#include "NiagaraFunctionLibrary.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/SpringArmComponent.h"
#include "CollisionQueryParams.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "EnhancedInputSubsystems.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Materials/MaterialInterface.h"
#include "Sound/SoundBase.h"
#include "Components/SceneComponent.h"
#include "Engineer.generated.h"

UCLASS()
class WOLJAWHACKATHON_API AEngineer : public APawn
{
    GENERATED_BODY()

private:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* LookAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* JumpAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* StartFireAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* StopFireAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* ReloadAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* StartFireProjectileAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* StopFireProjectileAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* ReloadProjectileAction;

public:
    AEngineer();

    // Components
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    USceneComponent* MainComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UCapsuleComponent* MainCapsule;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UCapsuleComponent* SecondaryCapsule;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UStaticMeshComponent* PrimaryMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UStaticMeshComponent* SecondaryMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components",meta = (AllowPrivateAccess = "true"))
    UCameraComponent* PlayerCamera;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
    USpringArmComponent* SpringArmComponent;

    // Player Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
    float CurrentHealth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
    FString PlayerName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
    float MaxHealth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
    float CurrentShield;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
    float MaxShield;

    // Movement and Rotation Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Properties")
    float RotationSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Properties")
    float TurnSmoothness;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Properties")
    bool bSmoothRotation;

    // Target rotation for smooth interpolation
    FRotator TargetRotation;

    // Weapon Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    float WeaponRange;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    float WeaponDamage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    float ProjectileDamage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    float WeaponFireRate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    float ProjectileFireRate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    float WeaponDelayDuration;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    float ProjectileDelayDuration;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    bool bIsAutomatic;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    bool bIsReloading;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    int32 CurrentAmmo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
    int32 MaxAmmo;

    // Weapon Components
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Components")
    USceneComponent* WeaponMuzzleFlashOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Components")
    USceneComponent* ProjectileMuzzleFlashOffset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Components")
    USceneComponent* ProjectileSpawnLocation;

    // Sound Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Properties")
    USoundBase* WeaponFireSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound Properties")
    USoundBase* ProjectileFireSound;

    // Timer Handles
    FTimerHandle WeaponFireRateTimerHandle;
    FTimerHandle ProjectileFireRateTimerHandle;
    FTimerHandle WeaponReloadingTimerHandle;
    FTimerHandle ProjectileReloadingTimerHandle;

    // HUD Properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
    TSubclassOf<class UUserWidget> UMG_PlayerHUD;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
    UUserWidget* HUD;

    // Functions
    UFUNCTION(BlueprintCallable)
    void DisplayPlayerHUD();

    UFUNCTION(BlueprintCallable)
    void StartFire();

    UFUNCTION(BlueprintCallable)
    void Fire();

    UFUNCTION(BlueprintCallable)
    void StopFire();



    UFUNCTION(BlueprintCallable)
    void StartFireProjectile();

    UFUNCTION(BlueprintCallable)
    void FireProjectile(); 

    UFUNCTION(BlueprintCallable)
    void StopFireProjectile();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputMappingContext* InputMappingContext;

    void Move(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
