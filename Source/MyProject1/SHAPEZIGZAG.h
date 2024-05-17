// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHAPEZIGZAG.generated.h"

UCLASS()
class MYPROJECT1_API ASHAPEZIGZAG : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASHAPEZIGZAG();

	/////////////////////////////////////////////////////////////crear malla////////
	UPROPERTY()//añadido definicion de objetos -----------
		USceneComponent* Root;
	UPROPERTY(EditAnyWhere)//donde sea conveniente
		UStaticMeshComponent* malla;
	//////////////////////////////////////////////////////////////////////////////

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Puntos para el movimiento en zigzag
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	FVector A;
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	FVector B;
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	FVector C;
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	FVector D;
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	FVector E;
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	FVector M;
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	FVector S;
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	FVector P;
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	float t;//tiempo
	UPROPERTY(EditAnywhere, Category = "moviento zigzag")
	float Length;

};
