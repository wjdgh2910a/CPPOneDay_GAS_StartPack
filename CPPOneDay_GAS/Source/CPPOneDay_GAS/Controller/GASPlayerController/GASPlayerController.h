// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GASPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CPPONEDAY_GAS_API AGASPlayerController : public APlayerController
{
	GENERATED_BODY()
private:
	UPROPERTY()
	TObjectPtr<class UInputAction> MoveAction;
	UPROPERTY()
	TObjectPtr<class UInputAction> AttackAction;
	UPROPERTY()
	TObjectPtr<class UInputMappingContext> MappingContext;
	TObjectPtr<class APlayerCharacter> ControlledCharacter;
public:
	AGASPlayerController();
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	virtual void OnPossess(APawn* InPawn) override;
	void Move(const struct FInputActionValue& Value);
	void Attack(const struct FInputActionValue& Value);
	
};
