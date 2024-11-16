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

/// Root Component (base for the entire actor)
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));

	MainComponent =  CreateDefaultSubobject<UCapsuleComponent>(TEXT("Main  Component"));
	RootComponent = MainComponent; 


	MainCapsule =  CreateDefaultSubobject<UCapsuleComponent>(TEXT("Main Capsule Component"));
	MainCapsule->SetupAttachment(MainComponent);

	SecondaryCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Secondary Capsule"));
	SecondaryCapsule->SetupAttachment(MainCapsule);

    // Primary Mesh (rotates based on input)
    PrimaryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Primary Mesh"));
    PrimaryMesh->SetupAttachment(SecondaryCapsule);

    // Secondary Mesh (wheels, attached to primary mesh)
    SecondaryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Secondary Mesh"));
    SecondaryMesh->SetupAttachment(SecondaryCapsule);

    // Weapon offsets (optional for muzzle flash and projectiles)
    WeaponMuzzleFlashOffset = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleFlash Offset"));
    WeaponMuzzleFlashOffset->SetupAttachment(MainCapsule);

    ProjectileMuzzleFlashOffset = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Muzzle Flash"));
    ProjectileMuzzleFlashOffset->SetupAttachment(PrimaryMesh);

    // Spring Arm Component (for smooth camera follow)
    //SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
    //SpringArmComponent->SetupAttachment(PrimaryMesh); // Attach to the Primary Mesh
   // SpringArmComponent->TargetArmLength = 300.0f;     // Distance from the mesh
    //SpringArmComponent->bEnableCameraLag = true;      // Smooth lag effect
    //SpringArmComponent->CameraLagSpeed = 3.0f;

    // Camera Component
    //PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
    //PlayerCamera->SetupAttachment(SpringArmComponent); // Attach to the spring arm
    //PlayerCamera->bUsePawnControlRotation = true;      // Allow camera rotation with input


	ProjectileSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Location"));


   
    // HUD setup (you may want to delay this to BeginPlay)
    HUD = CreateWidget<UUserWidget>(Cast<APlayerController>(GetController()), UMG_PlayerHUD);






	







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

	FRotator Rotation = FRotator::ZeroRotator;


    if (Controller != nullptr)
    {
        AddControllerYawInput(LookAxisVector.X * 50.0f * UGameplayStatics::GetWorldDeltaSeconds(this));
        //AddControllerPitchInput(LookAxisVector.Y);
    }
}


void AEngineer::StartFire()
{

Fire(); 
DebugMessage("Firing Works"); 

if(bIsAutomatic)
{
	GetWorldTimerManager().SetTimer(WeaponFireRateTimerHandle, this, &AEngineer::Fire, WeaponFireRate, true); 
	//DebugMessage("Firing"); 

}
}

void AEngineer::StopFire()
{

	GetWorldTimerManager().ClearTimer(WeaponFireRateTimerHandle); 
}

void AEngineer::Fire()
{

	DebugMessage("Firing"); 
	if(WeaponFireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, WeaponFireSound, GetActorLocation()); 
	}



	//hit Result When We hit something
	FHitResult HitResult; 

	FVector StartTrace = WeaponMuzzleFlashOffset->GetForwardVector(); 
	FVector EndTrace = StartTrace *  WeaponRange; 

	//Query Params Settings for our collsions

	FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(WeaponTrace)); //Trace for debug
	QueryParams.TraceTag = FName("WeaponTrace");// thsi is for debuuging
	QueryParams.AddIgnoredActor(this); 

	QueryParams.bTraceComplex = true; //for precisise collsion 
	QueryParams.bReturnPhysicalMaterial = true; //for when a spectif material such as wood or metal has been hit
	QueryParams.bReturnFaceIndex = true; //for precisise collsion 

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace, ECC_Visibility, QueryParams); 



	 DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Red, false, 10.0f, 0, 1.0f);

	if(bHit)
	{
		   // Draw debug line for hit
    

        DebugMessage("Line Trace Hit Detected!");

		 AActor* HitActor = HitResult.GetActor();
        if (HitActor)
        {
            DebugMessage(FString::Printf(TEXT("Hit Actor: %s"), *HitActor->GetName()));

			DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 18.0f, 12, FColor::Green, false, 10.0f);

            // Example: Apply damage
           UGameplayStatics::ApplyDamage(HitActor, WeaponDamage, GetController(), this, UDamageType::StaticClass());
        }

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
		EnhancedInputComponent->BindAction(StartFireAction, ETriggerEvent::Started, this, &AEngineer::StartFire);
		EnhancedInputComponent->BindAction(StopFireAction, ETriggerEvent::Completed, this, &AEngineer::StopFire);
		
       


    }

}

