// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyProject1GameMode.generated.h"

UCLASS(MinimalAPI)
class AMyProject1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyProject1GameMode();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class AMyProject1Pawn* Jugador;
};



