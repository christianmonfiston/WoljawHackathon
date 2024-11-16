#include "MovingPlatform.h"
#include "Components/StaticMeshComponent.h"

AMovingPlatform::AMovingPlatform()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create and attach the Static Mesh component
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = Mesh; 

	Speed = 200.0f;
}

void AMovingPlatform::BeginPlay()
{
    Super::BeginPlay();

    // Save the initial location of the platform
    StartLocation = GetActorLocation();
}

void AMovingPlatform::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Determine current location
    FVector CurrentLocation = GetActorLocation();

    // Calculate the target direction
    FVector Direction = (bMovingForward ? TargetLocation - StartLocation : StartLocation - TargetLocation).GetSafeNormal();

    // Move the platform
    FVector NewLocation = CurrentLocation + Direction * Speed * DeltaTime;

    // Check if the platform has reached its destination
    float JourneyLength = (TargetLocation - StartLocation).Size();
    float TravelledDistance = (NewLocation - StartLocation).Size();

    if (TravelledDistance >= JourneyLength)
    {
        bMovingForward = !bMovingForward; // Reverse direction
        NewLocation = bMovingForward ? StartLocation : TargetLocation; // Correct overshoot
    }

    // Update platform's location
    SetActorLocation(NewLocation);
}
