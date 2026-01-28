// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "NativeGameplayTags.h"
#include "HitCheck_Left.generated.h"

/**
 * 
 */
UCLASS()
class CPPONEDAY_GAS_API UHitCheck_Left : public UAnimNotify
{
	GENERATED_BODY()
public:
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FGameplayTag HitTag;
};
