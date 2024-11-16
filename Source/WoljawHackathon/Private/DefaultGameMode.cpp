#include "DefaultGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"

// Constructor to initialize default values
ADefaultGameMode::ADefaultGameMode()
{
	MatchDuration = 300.0f; 
    MaxHeartFragments = 6; 
}

void ADefaultGameMode::BeginPlay()
{
	Super::BeginPlay();


	GetWorldTimerManager().SetTimer(MatchTimerHandle, this, &ADefaultGameMode::DecreaseMatchTime, 1.0f, true);

}

void ADefaultGameMode::DecreaseMatchTime()
{
	// Decrease the match time
	MatchDuration--;

	// If time runs out, end the match with a loss
	if (MatchDuration <= 0)
	{
		HandleMatchEnd(false); // Player lost due to time running out
	}
}


void ADefaultGameMode::HandleMatchEnd(bool bPlayerWon)
{
	// Logic to handle match end
	UE_LOG(LogTemp, Warning, TEXT("Match Over"));

    if (bPlayerWon)
	{
		// Handle win logic (display win message, transition to next level, etc.)
		UE_LOG(LogTemp, Warning, TEXT("Player Wins!"));
	}
	else
	{
		// Handle lose logic (display lose message, restart game, etc.)
		UE_LOG(LogTemp, Warning, TEXT("Player Loses!"));
	}

    
    
    // GetWorld()->ServerTravel("/Game/Maps/NextLevel");  // Example of changing the level

// Quit the game for now
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		UKismetSystemLibrary::QuitGame(World, PlayerController, EQuitPreference::Quit, false);
	}
}

void ADefaultGameMode::CollectHeartFragment()
{
	// Increment the collected heart fragments counter
	CollectedHeartFragments++;

	// Check if the player has collected all 6 heart fragments
	if (CollectedHeartFragments >= MaxHeartFragments)
	{
		HandleMatchEnd(true); // Player wins by collecting all fragments
	}
}

