// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestCPP/InteractInterface.h"
#include "GrabActor.generated.h"

UCLASS()
class TESTCPP_API AGrabActor : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrabActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Mesh")
	UStaticMeshComponent* Mesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void test();
	
	virtual bool ReactToTrigger_Implementation() override;

	virtual void Grab_Implementation(ATestCppUnrealCharacter* Character) override;

};
