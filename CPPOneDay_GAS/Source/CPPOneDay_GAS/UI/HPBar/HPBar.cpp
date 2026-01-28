// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HPBar/HPBar.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
void UHPBar::SetHP(float CurHealth,float MaxHealth)
{
	HpProgressBar->SetPercent(CurHealth/ MaxHealth);
	HpTextBlock->SetText(FText::FromString(FString::Printf(TEXT("%d/%d"), (int)CurHealth, (int)MaxHealth)));
}

void UHPBar::BindCharacterAttribute(UCharacterAttributeSet* CharacterAttributeSet)
{
}
