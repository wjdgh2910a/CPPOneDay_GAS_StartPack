// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bush.generated.h"

UCLASS()
class CPPONEDAY_GAS_API ABush : public AActor
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UBoxComponent> BoxComponent;
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UStaticMeshComponent> StaticMeshComponent;
public:	
	ABush();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	UFUNCTION()
	void OnBoxBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
