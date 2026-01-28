// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"

namespace MyGameplayTags
{
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Character_Walk);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Ability_Attack);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_State_Attacking);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Character_HitCheck);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_HitEffect_Left);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_HitEffect_Right);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_HitEffect_Finish);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_Ability_Hit);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(Character_State_Hit);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayCue_Effect_Hit);
}