// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Unreal Engine
#include "CoreMinimal.h"

// Unreal Test Project
#include "UTAttributeSet.h"
#include "UTCombatAttributeSet.generated.h"

/**
 * Attribute set that handles damage intention and damage application.
 * It will have a tha damage attribute that will serve as form of depleting Health,
 * an attribute from health attribute set.
 */
UCLASS(BlueprintType)
class UNREALTEST_API UUTCombatAttributeSet : public UUTAttributeSet
{
	GENERATED_BODY()

public:
	UUTCombatAttributeSet();

	ATTRIBUTE_ACCESSORS(UUTCombatAttributeSet, BaseDamage);

protected:
	UFUNCTION()
	void OnRep_BaseDamage(const FGameplayAttributeData& OldValue);

private:
	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_BaseDamage,  Category="UnrealTest|Combat")
	FGameplayAttributeData BaseDamage;
};
