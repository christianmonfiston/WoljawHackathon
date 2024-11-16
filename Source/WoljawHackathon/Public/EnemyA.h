// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/TimerHandle.h"
#include "DrawDebugHelpers.h"
#include "Sound/SoundBase.h"
#include "EnemyA.generated.h"

UCLASS()
class WOLJAWHACKATHON_API AEnemyA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyA();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret Components")
    UStaticMeshComponent* TurretBase;
	    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret Components")
    UStaticMeshComponent* TurretGun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret Components")
	USphereComponent* DetectionRange; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret Components")
	USoundBase* FireSound; 

	//TIme Handle for rate at turret shoots 
	FTimerHandle FireTimerHandle; 

	//tagret actoe to hit
	AActor* TargetActor;

	 // main properties mostly how the turrent work
    UPROPERTY(EditAnywhere, Category = "Turret Properties")
    float DetectionRadius;

    UPROPERTY(EditAnywhere, Category = "Turret Properties")
    float FireRate;

    UPROPERTY(EditAnywhere, Category = "Turret Properties")
    TSubclassOf<class AProjectile> ProjectileClass;

    UPROPERTY(EditAnywhere, Category = "Turret")
    float GunRotationSpeed;

    // Functions

	UFUNCTION(BlueprintCallable)
    void DetectTarget();

	UFUNCTION(BlueprintCallable)
    void FireAtTarget();

    void RotateTurret(float DeltaTime);






protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
