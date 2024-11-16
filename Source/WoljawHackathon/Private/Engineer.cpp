// Fill out your copyright notice in the Description page of Project Settings.


#include "Engineer.h"

// Sets default values

void DebugMessage(const FString& message)
{
if(GEngine)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, message); 
}
}
AEngineer::AEngineer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set Primary Mesh
	PrimaryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Primary Mesh")); 
	RootComponent = PrimaryMesh; 

	SecondaryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Secondary Mesh")); 
	SecondaryMesh->SetupAttachment(PrimaryMesh); 

	WeaponMuzzleFlashOffset = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleFlash OffSet")); 
	ProjectileMuzzleFlashOffset = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Muzzle Flash")); 






	MaxHealth = 100.0f; 
	CurrentHealth = MaxHealth; 

	PlayerName = FString("Engineer"); 

	WeaponRange = 20000.0f; 
	ProjectileDamage = 40.0f; 
	WeaponDamage = 20.0f; 
	WeaponFireRate = 0.1f; 
	ProjectileFireRate = 0.5f; 
	WeaponDelayDuration = WeaponFireRate; 
	ProjectileDelayDuration = ProjectileFireRate; 

	bIsAutomatic = true; 

	
	




}

// Called when the game starts or when spawned
void AEngineer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEngineer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEngineer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

