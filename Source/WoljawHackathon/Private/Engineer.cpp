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

	//Create Secondary Mesh Probably gonna be the weels
	SecondaryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Secondary Mesh")); 
	SecondaryMesh->SetupAttachment(PrimaryMesh); 

	WeaponMuzzleFlashOffset = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleFlash OffSet")); 
	ProjectileMuzzleFlashOffset = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Muzzle Flash")); 

	//HUD that the enginner will see 
	HUD = CreateWidget<UUserWidget>(Cast<APlayerController>(GetController()), UMG_PlayerHUD); 

	//Create Camera Component
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera")); 

	







	MaxHealth = 100.0f; 
	CurrentHealth = MaxHealth; 
	MaxShield = 50.0f; 
	CurrentShield = MaxShield;
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
	DebugMessage("Engineer is working"); 

	

	//Add HUD to viewport 
	DisplayPlayerHUD();


}

// Called every frame
void AEngineer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

void AEngineer::DisplayPlayerHUD()
{
if(UMG_PlayerHUD)
{
	if(HUD)
	{
		HUD->AddToViewport(9999); 
		DebugMessage("HUD has been spawned succesfully"); 
	}
}
}


void AEngineer::Move(const FInputActionValue& Value)
{
    const FVector2D MovementVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        // Find forward/right vectors
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        AddMovementInput(ForwardDirection, MovementVector.Y);
        AddMovementInput(RightDirection, MovementVector.X);
    }
}

void AEngineer::Look(const FInputActionValue& Value)
{
    const FVector2D LookAxisVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        AddControllerYawInput(LookAxisVector.X);
        AddControllerPitchInput(LookAxisVector.Y);
    }
}


// Called to bind functionality to input
void AEngineer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(InputMappingContext, 0);
        }
    }

    if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
    {
       
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AEngineer::Move);
        EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AEngineer::Look);
       


    }

}

