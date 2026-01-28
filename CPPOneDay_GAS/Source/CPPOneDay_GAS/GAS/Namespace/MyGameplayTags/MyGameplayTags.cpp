// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Namespace/MyGameplayTags/MyGameplayTags.h"

namespace MyGameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(Event_Character_Walk, TEXT("Event.Character.Walk"));
	UE_DEFINE_GAMEPLAY_TAG(Character_Ability_Attack, TEXT("Character.Ability.Attack"));
	UE_DEFINE_GAMEPLAY_TAG(Character_State_Attacking, TEXT("Character.State.Attacking"));
	UE_DEFINE_GAMEPLAY_TAG(Event_Character_HitCheck, TEXT("Event.Character.HitCheck"));
	UE_DEFINE_GAMEPLAY_TAG(Event_HitEffect_Left, TEXT("Event.HitEffect.Left"));
	UE_DEFINE_GAMEPLAY_TAG(Event_HitEffect_Right, TEXT("Event.HitEffect.Right"));
	UE_DEFINE_GAMEPLAY_TAG(Event_HitEffect_Finish, TEXT("Event.HitEffect.Finish"));
	UE_DEFINE_GAMEPLAY_TAG(Character_Ability_Hit, TEXT("Character.Ability.Hit"));
	UE_DEFINE_GAMEPLAY_TAG(Character_State_Hit, TEXT("Character.State.Hit"));
	UE_DEFINE_GAMEPLAY_TAG(GameplayCue_Effect_Hit, TEXT("GameplayCue.Effect.Hit"));
}