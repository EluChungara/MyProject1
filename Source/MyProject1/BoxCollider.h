// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include"MyProject1Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "BoxCollider.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT1_API ABoxCollider : public ATriggerBox
{
	GENERATED_BODY()
public: 
	virtual void BeginPlay();
	UFUNCTION()
		void colisionar(class AActor* objetoA, class AActor* objetoB);
	
};



