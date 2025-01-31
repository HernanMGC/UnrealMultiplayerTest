// Fill out your copyright notice in the Description page of Project Settings.

// Unreal Engine
#include "UnrealTest/Attributes/UTCombatAttributeSet.h"
#include "Net/UnrealNetwork.h"

UUTCombatAttributeSet::UUTCombatAttributeSet()
	: BaseDamage(0.0f)
{
}

void UUTCombatAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UUTCombatAttributeSet, BaseDamage, COND_OwnerOnly, REPNOTIFY_Always);
}

void UUTCombatAttributeSet::OnRep_BaseDamage(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUTCombatAttributeSet, BaseDamage, OldValue);
}
