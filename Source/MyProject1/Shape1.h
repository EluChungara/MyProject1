// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shape1.generated.h"

UCLASS()
class MYPROJECT1_API AShape1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShape1();
	UPROPERTY()
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnyWhere)
	UStaticMeshComponent* malla;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnyWhere,Category = "Nave Enemiga")
	float velocity;
	UPROPERTY(EditAnyWhere, Category = "Nave Enemiga")
	float damageLevel;
	
//public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

private:
	void AsignarMalla();
	void AsignarMaterial();
	static TArray<UStaticMesh*> MeshArray;
	static TArray<UMaterialInterface*> MaterialArray;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void mover();
	void saltar();
	float impulso;
	void DestruirFigura();
};
