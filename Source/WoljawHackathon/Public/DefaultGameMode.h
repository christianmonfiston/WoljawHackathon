#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Blueprint/UserWidget.h"
#include "Engine/TimerHandle.h"
#include "DefaultGameMode.generated.h"

/**
 * 
 */
UCLASS()
class WOLJAWHACKATHON_API ADefaultGameMode : public AGameMode
{
	GENERATED_BODY()

protected:
	
	//timer handle for match time
	FTimerHandle MatchTimerHandle;

	//match duration variable
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Match Properties")
	float MatchDuration;

//function to end the match
	UFUNCTION()
	void HandleMatchEnd();

	// Start the match timer
	virtual void BeginPlay() override;

public:
	ADefaultGameMode();
};
