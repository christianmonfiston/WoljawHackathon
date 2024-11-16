#include "DefaultGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"

// Constructor to initialize default values
ADefaultGameMode::ADefaultGameMode()
{
	MatchDuration = 10.0f; 
}

void ADefaultGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Start the match timer
	GetWorld()->GetTimerManager().SetTimer(
		MatchTimerHandle, 
		this, 
		&ADefaultGameMode::HandleMatchEnd, 
		MatchDuration, 
		false //doesnt loop
	);
}

void ADefaultGameMode::HandleMatchEnd()
{
	// Logic to handle match end
	UE_LOG(LogTemp, Warning, TEXT("Match Over"));

// Quit the game for now
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		UKismetSystemLibrary::QuitGame(World, PlayerController, EQuitPreference::Quit, false);
	}
}
