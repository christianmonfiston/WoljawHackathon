// Fill out your copyright notice in the Description page of Project Settings.

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


	//When pressed  weapon firing input action happen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputAction* MoveAction; 

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputAction* LookAction; 

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputAction* JumpAction; 




	//When pressed  weapon firing input action happen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputAction* StartFireAction; 

	//When released weapon firing input action happen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputAction* StopFireAction; 

	//When pressed firing input action happen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputAction* ReloadAction; 

	//When pressed  weapon firing input action happen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputAction* StartFireProjectileAction; 

	//When released weapon firing input action happen
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputAction* StopFireProjectileAction; 

	//When pressed reload action happen for projectiles
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputAction* ReloadProjectileAction; 

public:
	// Sets default values for this pawn's properties
	AEngineer();

	// Player properties
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


	// Player components
	UPROPERTY(EditAnywhere, Category = "Player Components")
	UStaticMeshComponent* PrimaryMesh;

	UPROPERTY(EditAnywhere, Category = "Player Components")
	UStaticMeshComponent* SecondaryMesh;

	UPROPERTY(EditAnywhere, Category = "Player Components")
	UCameraComponent* PlayerCamera;
	// Weapon properties
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

	// Sound properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
	USoundBase* WeaponFireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
	USoundBase* ProjectileFireSound;

	// Muzzle flash offsets
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
	USceneComponent* WeaponMuzzleFlashOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
	USceneComponent* ProjectileMuzzleFlashOffset;

	// Weapon mode
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
	bool bIsAutomatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
	bool bIsReloading; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
	int32 CurrentAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
	int32 MaxAmmo;



	//Weapon Timer Handle for robots 
	FTimerHandle WeaponFireRateTimerHandle; 
	//Projectile Timer Handle for projectiles
	FTimerHandle ProjectileFireRateTimerHandle; 

	//Weapon reloading Timer Handle for robots  
	FTimerHandle WeaponReloadingTimerHandle; 
	//Projectile Timer Handle for when projectiles is reloading
	FTimerHandle ProjectileReloadingTimerHandle; 

	//Reference to the HUD class that the player will see 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Components")
	TSubclassOf<class UUserWidget> UMG_PlayerHUD; 

		//Reference to HUD that the player will see 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Components")
	UUserWidget* HUD; 

public: 

UFUNCTION(BlueprintCallable)
	void DisplayPlayerHUD(); 










protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess="true"))
	UInputMappingContext* InputMappingContext; 

	void Move(const FInputActionValue& Value); 
	void Look(const FInputActionValue& Value); 








	











public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
