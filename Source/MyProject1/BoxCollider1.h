// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MyProject1Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "BoxCollider1.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT1_API ABoxCollider1 : public ATriggerBox
{
	GENERATED_BODY()

public:
	virtual void BeginPlay();
	ABoxCollider1();
	UFUNCTION()
	void colisionar(class AActor* objetoA, class AActor* objetoB);

	UPROPERTY(EditAnywhere)
	AMyProject1Pawn* nave;

	bool isTouched;
};
