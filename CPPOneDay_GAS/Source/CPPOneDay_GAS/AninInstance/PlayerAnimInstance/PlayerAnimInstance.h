// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class CPPONEDAY_GAS_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPlayerAnimInstance();
protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class ACharacter> OwningCharacter;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UCharacterMovementComponent> Movement;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool isMove;

};
