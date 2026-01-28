// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter/BaseCharacter.h"
#include "AbilitySystemComponent.h"
#include "GAS/Namespace/MyGameplayTags/MyGameplayTags.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/WidgetComponent.h"
#include "UI/HpBar/HpBar.h"
#include "GameplayAbilitiesModule.h"
#include "AbilitySystemGlobals.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	HpBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("HpBar"));
	HpBar->SetWidgetSpace(EWidgetSpace::Screen);
	HpBar->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	HpBar->SetupAttachment(GetRootComponent());
	HpBar->SetDrawSize(FVector2D(150.0f, 20.f));
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	FixedLocationX = GetActorLocation().X;
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Location = GetActorLocation();
	Location.X = FixedLocationX;
	SetActorLocation(Location);
}

void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	HPBarWidget = Cast<UHPBar>(CreateWidget(GetWorld(), HPBarClass));
	if (HPBarWidget)
	{
		HpBar->SetWidget(HPBarWidget);
	}
}

