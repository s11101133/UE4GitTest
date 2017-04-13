// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UE4GITTEST_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() 
public:
		UFUNCTION(BlueprintPure, meta = (DisplayName = "One Left Shift", CompactNodeTitle = "1 <<"), Category = "MyBlueprintNode")
		static INT32 OneLeftShift(INT32 flag);
	
	
	
};
