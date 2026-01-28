// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/AnimNotify/HitCheck_Left/HitCheck_Left.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GAS/Namespace/MyGameplayTags/MyGameplayTags.h"

void UHitCheck_Left::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);

}
