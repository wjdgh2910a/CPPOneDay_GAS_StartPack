// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/GASPlayerController/GASPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "BaseCharacter/PlayerCharacter/PlayerCharacter.h"

AGASPlayerController::AGASPlayerController()
{
	static ConstructorHelpers::FObjectFinder<UInputAction> MoveActionObj(TEXT("/Script/EnhancedInput.InputAction'/Game/Blueprint/Character/Input/IA_Move.IA_Move'"));
	if (MoveActionObj.Succeeded())
		MoveAction = MoveActionObj.Object;
	static ConstructorHelpers::FObjectFinder<UInputAction> AttackActionObj(TEXT("/Script/EnhancedInput.InputAction'/Game/Blueprint/Character/Input/IA_Attack.IA_Attack'"));
	if(AttackActionObj.Succeeded())
		AttackAction = AttackActionObj.Object;
	static ConstructorHelpers::FObjectFinder<UInputMappingContext> MappingContextObj(TEXT("/Script/EnhancedInput.InputMappingContext'/Game/Blueprint/Character/Input/IMC_Character.IMC_Character'"));
	if(MappingContextObj.Succeeded())
		MappingContext = MappingContextObj.Object;
}

void AGASPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if(InputSubsystem && MappingContext)
	{
		InputSubsystem->AddMappingContext(MappingContext, 0);
	}
}

void AGASPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if(UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if(MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGASPlayerController::Move);
			EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &AGASPlayerController::Attack);
		}
	}
}

void AGASPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	ControlledCharacter = Cast<APlayerCharacter>(InPawn);
}

void AGASPlayerController::Move(const FInputActionValue& Value)
{
	FVector2D MoveVector = Value.Get<FVector2D>();
	if(ControlledCharacter)
	{
		FVector Forward = GetTransformComponent()->GetForwardVector();
		Forward.Z = 0.f;
		Forward.Normalize();
		ControlledCharacter->AddMovementInput(Forward, MoveVector.X);
	}
}

void AGASPlayerController::Attack(const FInputActionValue& Value)
{
}
