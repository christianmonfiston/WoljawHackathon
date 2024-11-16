// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"  
#include "Components/PrimitiveComponent.h"  
#include "Engineer.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "HeartFragment.generated.h"

UCLASS()
class WOLJAWHACKATHON_API AHeartFragment : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHeartFragment();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heart Components")
	UStaticMeshComponent* HeartMesh; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heart Components")
	USoundBase* CollectSound; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heart Components")
	float DetectionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Detection")
    USphereComponent* DetectionSphere;


	//Actor who collide
	AActor* TargetActor;



	  /** Called when an actor enters the detection range */
    UFUNCTION()
    void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);






protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
