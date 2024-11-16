// Fill out your copyright notice in the Description page of Project Settings.


#include "HeartFragment.h"

// Sets default values
AHeartFragment::AHeartFragment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;




	// Detection Sphere
    DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
	RootComponent = DetectionSphere;


	HeartMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Heart Mesh"));
	HeartMesh->SetupAttachment(RootComponent); 


	DetectionRadius = 100.0f; 
    DetectionSphere->SetSphereRadius(DetectionRadius);

	DetectionSphere->OnComponentBeginOverlap.AddDynamic(this, &AHeartFragment::OnSphereBeginOverlap);



}

// Called when the game starts or when spawned
void AHeartFragment::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeartFragment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AHeartFragment::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (CollectSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, CollectSound, GetActorLocation());
	}

	
	Destroy();
   
}



