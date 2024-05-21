// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject1GameMode.h"
#include "MyProject1Pawn.h"


AMyProject1GameMode::AMyProject1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AMyProject1Pawn::StaticClass();
}

void AMyProject1GameMode::BeginPlay()
{

    // Obtén el primer PlayerController
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController)
    {
        // Obtén el Pawn controlado por este PlayerController
        AMyProject1Pawn* MiJugador = Cast<AMyProject1Pawn>(PlayerController->GetPawn());
        if (MiJugador)
        {
            FString Message = FString::Printf(TEXT("Vidas restantes: %d"), MiJugador->GetVidasRestantes());
            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Green, Message);
            }
        }
    }
}

