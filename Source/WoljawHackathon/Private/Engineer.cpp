// Engineer.cpp
#include "Engineer.h"

void DebugMessage(const FString& message)
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, message);
    }
}

AEngineer::AEngineer()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create and set up components
    MainComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Main Component"));
    RootComponent = MainComponent;

    MainCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Main Capsule Component"));
    MainCapsule->SetupAttachment(MainComponent);

    SecondaryCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Secondary Capsule"));
    SecondaryCapsule->SetupAttachment(MainCapsule);

    PrimaryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Primary Mesh"));
    PrimaryMesh->SetupAttachment(SecondaryCapsule);

    SecondaryMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Secondary Mesh"));
    SecondaryMesh->SetupAttachment(SecondaryCapsule);

    WeaponMuzzleFlashOffset = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleFlash Offset"));
    WeaponMuzzleFlashOffset->SetupAttachment(MainCapsule);

    ProjectileMuzzleFlashOffset = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Muzzle Flash"));
    ProjectileMuzzleFlashOffset->SetupAttachment(PrimaryMesh);

    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
    SpringArmComponent->SetupAttachment(PrimaryMesh);
    SpringArmComponent->TargetArmLength = 300.0f;
    SpringArmComponent->bEnableCameraLag = true;
    SpringArmComponent->CameraLagSpeed = 3.0f;

    PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
    PlayerCamera->SetupAttachment(SpringArmComponent);
    PlayerCamera->bUsePawnControlRotation = true;

    ProjectileSpawnLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Location"));
    ProjectileSpawnLocation->SetupAttachment(PrimaryMesh);

    // Initialize properties
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

    // Initialize rotation properties
    RotationSpeed = 90.0f;
    TurnSmoothness = 5.0f;
    bSmoothRotation = true;
}

void AEngineer::BeginPlay()
{
    Super::BeginPlay();

     // Verify component initialization
    //if (!PlayerCamera) DebugMessage("WARNING: PlayerCamera is null");
    //if (!WeaponMuzzleFlashOffset) DebugMessage("WARNING: WeaponMuzzleFlashOffset is null");
    //if (!PrimaryMesh) DebugMessage("WARNING: PrimaryMesh is null");
    //if (!SecondaryMesh) DebugMessage("WARNING: SecondaryMesh is null");


    DebugMessage("Engineer is working");
    DisplayPlayerHUD();
}

void AEngineer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Handle smooth rotation in tick
    if (bSmoothRotation && !FMath::IsNearlyEqual(
        PrimaryMesh->GetComponentRotation().Yaw,
        TargetRotation.Yaw,
        0.1f))
    {
        FRotator CurrentRotation = PrimaryMesh->GetComponentRotation();
        FRotator NewRotation = FMath::RInterpTo(
            CurrentRotation,
            TargetRotation,
            DeltaTime,
            TurnSmoothness
        );
        
        PrimaryMesh->SetWorldRotation(NewRotation);
        SecondaryMesh->SetWorldRotation(NewRotation);
    }
}

void AEngineer::DisplayPlayerHUD()
{
    if (UMG_PlayerHUD)
    {
        if (HUD)
        {
            HUD->AddToViewport(9999);
            DebugMessage("HUD has been spawned successfully");
        }
    }
}

void AEngineer::Move(const FInputActionValue& Value)
{
    const FVector2D MovementVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
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
        // Update controller rotation
        AddControllerYawInput(LookAxisVector.X * RotationSpeed * UGameplayStatics::GetWorldDeltaSeconds(this));
        
        // Get the current controller rotation
        FRotator ControllerRotation = Controller->GetControlRotation();
        
        if (bSmoothRotation)
        {
            // Set target rotation for smooth interpolation
            TargetRotation = FRotator(0.0f, ControllerRotation.Yaw, 0.0f);
            
            // Smoothly interpolate current mesh rotation to target rotation
            FRotator CurrentRotation = PrimaryMesh->GetComponentRotation();
            FRotator NewRotation = FMath::RInterpTo(
                CurrentRotation,
                TargetRotation,
                UGameplayStatics::GetWorldDeltaSeconds(this),
                TurnSmoothness
            );
            
            // Apply the rotation to both meshes
            PrimaryMesh->SetWorldRotation(NewRotation);
            SecondaryMesh->SetWorldRotation(NewRotation);

			//Apply ROtation To Muzzle Off Fire and Projectile

			WeaponMuzzleFlashOffset->SetWorldRotation(PrimaryMesh->GetComponentRotation()); 
			WeaponMuzzleFlashOffset->SetWorldLocation(PrimaryMesh->GetComponentLocation()); 


        }
        else
        {
            // Instant rotation
            FRotator NewRotation = FRotator(0.0f, ControllerRotation.Yaw, 0.0f);
            PrimaryMesh->SetWorldRotation(NewRotation);
            SecondaryMesh->SetWorldRotation(NewRotation);

            ///

			WeaponMuzzleFlashOffset->SetWorldRotation(PrimaryMesh->GetComponentRotation()); 
			WeaponMuzzleFlashOffset->SetWorldLocation(PrimaryMesh->GetComponentLocation()); 

        }
    }
}

void AEngineer::StartFire()
{
    Fire();
    DebugMessage("Firing Works");

    if (bIsAutomatic)
    {
        GetWorldTimerManager().SetTimer(WeaponFireRateTimerHandle, this, &AEngineer::Fire, WeaponFireRate, true);
    }
}

void AEngineer::StopFire()
{
    GetWorldTimerManager().ClearTimer(WeaponFireRateTimerHandle);
}

void AEngineer::Fire()
{
    DebugMessage("Firing");
    if (WeaponFireSound)
    {
        UGameplayStatics::PlaySoundAtLocation(this, WeaponFireSound, GetActorLocation());
    }

    FHitResult HitResult;
    FVector StartTrace = WeaponMuzzleFlashOffset->GetComponentLocation();
    FVector ForwardVector = WeaponMuzzleFlashOffset->GetForwardVector();
    FVector EndTrace = StartTrace + (ForwardVector * WeaponRange);

    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(WeaponTrace));
    QueryParams.TraceTag = FName("WeaponTrace");
    QueryParams.AddIgnoredActor(this);
    QueryParams.bTraceComplex = true;
    QueryParams.bReturnPhysicalMaterial = true;
    QueryParams.bReturnFaceIndex = true;

    bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace, ECC_Visibility, QueryParams);

    DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Red, false, 10.0f, 0, 1.0f);

    if (bHit)
    {
        DebugMessage("Line Trace Hit Detected!");

        AActor* HitActor = HitResult.GetActor();
        if (HitActor)
        {
            DebugMessage(FString::Printf(TEXT("Hit Actor: %s"), *HitActor->GetName()));
            DrawDebugSphere(GetWorld(), HitResult.ImpactPoint, 18.0f, 12, FColor::Green, false, 10.0f);
            UGameplayStatics::ApplyDamage(HitActor, WeaponDamage, GetController(), this, UDamageType::StaticClass());
        }
    }
}

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