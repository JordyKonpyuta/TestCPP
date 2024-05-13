// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

class ATestCppUnrealCharacter;

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TESTCPP_API IInteractInterface
{
	GENERATED_BODY()

public :
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool ReactToTrigger();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void Grab(ATestCppUnrealCharacter *Character);

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
};
