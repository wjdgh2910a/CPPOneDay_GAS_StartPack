// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HPBar.generated.h"

/**
 * 
 */
UCLASS()
class CPPONEDAY_GAS_API UHPBar : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UProgressBar> HpProgressBar;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UTextBlock> HpTextBlock;
public:
	UFUNCTION()
	void SetHP(float CurHealth, float MaxHealth);
	void BindCharacterAttribute(class UCharacterAttributeSet* CharacterAttributeSet);
};
