// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Actor/Bush/Bush.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GAS/Namespace/MyGameplayTags/MyGameplayTags.h"

ABush::ABush()
{
 	PrimaryActorTick.bCanEverTick = true;
	BoxComponent = CreateDefaultSubobject<class UBoxComponent>(TEXT("BoxComponent"));
	SetRootComponent(BoxComponent);
	StaticMeshComponent = CreateDefaultSubobject<class UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(BoxComponent);

}

void ABush::BeginPlay()
{
	Super::BeginPlay();
}

void ABush::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABush::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ABush::OnBoxBeginOverlap);
	BoxComponent->OnComponentEndOverlap.AddDynamic(this, &ABush::OnBoxEndOverlap);
}

void ABush::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

void ABush::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

