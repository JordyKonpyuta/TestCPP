// Fill out your copyright notice in the Description page of Project Settings.


#include "GrabActor.h"

#include "AI/NavigationSystemBase.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "TestCPP/TestCPPCharacter.h"

// Sets default values
AGrabActor::AGrabActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

}

// Called when the game starts or when spawned
void AGrabActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrabActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrabActor::test()
{
	UE_LOG(LogTemp, Warning, TEXT("COUCOU"));
}

bool AGrabActor::ReactToTrigger_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("COUCOU"));
	return false;
}

void AGrabActor::Grab_Implementation(ATestCppUnrealCharacter* Character)
{

	Character->GetPhysicsHandleComponent()->GrabComponentAtLocation(Mesh, NAME_None, GetActorLocation());

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("grab"));
	
}



