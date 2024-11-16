// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyA.h"

// Sets default values
AEnemyA::AEnemyA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	TurretBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretBase"));
    RootComponent = TurretBase;

    TurretGun = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretGun"));
    TurretGun->SetupAttachment(TurretBase);

    DetectionRange = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionRange"));
    DetectionRange->SetupAttachment(RootComponent);

  
    DetectionRadius = 1000.0f;
    FireRate = 0.1f;
    GunRotationSpeed = 90.0f;

    DetectionRange->SetSphereRadius(DetectionRadius);




}

// Called when the game starts or when spawned
void AEnemyA::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &AEnemyA::DetectTarget, 0.5f, true);

	
}

// Called every frame
void AEnemyA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    DrawDebugSphere(GetWorld(), GetActorLocation(), 18.0f, 12, FColor::Green, false, 10.0f);

	 if (TargetActor)
    {
        RotateTurret(DeltaTime);
    }

}

void AEnemyA::DetectTarget()
{
	///
}


void AEnemyA::FireAtTarget()
{
	///
}

void AEnemyA::RotateTurret(float DeltaTime)
{
	///

	if (!TargetActor) return;

    // Get direction to target
    FVector Direction = (TargetActor->GetActorLocation() - TurretGun->GetComponentLocation()).GetSafeNormal();
    FRotator TargetRotation = Direction.Rotation();

    // Smoothly rotate the gun towards the target
    FRotator CurrentRotation = TurretGun->GetComponentRotation();
    FRotator NewRotation = FMath::RInterpConstantTo(CurrentRotation, TargetRotation, DeltaTime, GunRotationSpeed);
    TurretGun->SetWorldRotation(NewRotation);
}


