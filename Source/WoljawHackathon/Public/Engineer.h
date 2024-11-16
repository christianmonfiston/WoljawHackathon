// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "Sound/SoundBase.h"
#include "Components/SceneComponent.h"
#include "Engineer.generated.h"

UCLASS()
class WOLJAWHACKATHON_API AEngineer : public APawn
{
	GENERATED_BODY()

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

	// Player components
	UPROPERTY(EditAnywhere, Category = "Player Components")
	UStaticMeshComponent* PrimaryMesh;

	UPROPERTY(EditAnywhere, Category = "Player Components")
	UStaticMeshComponent* SecondaryMesh;

	// Weapon properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	float WeaponRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	float WeaponDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	float ProjectileDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	float WeaponFireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	float ProjectileFireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	float WeaponDelayDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	float ProjectileDelayDuration;

	// Sound properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	USoundBase* WeaponFireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	USoundBase* ProjectileFireSound;

	// Muzzle flash offsets
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	USceneComponent* WeaponMuzzleFlashOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	USceneComponent* ProjectileMuzzleFlashOffset;

	// Weapon mode
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Properties")
	bool bIsAutomatic;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
