// Fill out your copyright notice in the Description page of Project Settings.

#include "Shape1.h"
#include "Shape.h"
#include "MyProject1Pawn.h"
#include "BoxCollider.h"
#include "BoxCollider1.h"


void ABoxCollider1::BeginPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("comienza el objeto"));


	OnActorBeginOverlap.AddDynamic(this, &ABoxCollider1::colisionar);
}

ABoxCollider1::ABoxCollider1()
{
	isTouched = false;
}
void ABoxCollider1::colisionar(AActor* objetoA, AActor* objetoB)
{

	if (!objetoA || !objetoB) {
		UE_LOG(LogTemp, Warning, TEXT("Uno de los objetos es nulo."));
		return;
	}

	FString mensaje = FString::Printf(TEXT("Objeto A primero en colisionar: %s, Objeto B segundo en colisionar: %s"), *objetoA->GetName(), *objetoB->GetName());
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, mensaje);

	if (BoxColliderRef) {
		DestruirFiguras();
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT("Destruyendo figuras"));
	}
			
}

void ABoxCollider1::DestruirFiguras()
{
	if (BoxColliderRef) {
		for (AShape1* Shape1 :BoxColliderRef->ShapeActors) {
			if (Shape1) {
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, TEXT("Destruyendo Shape"));
				Shape1->Destroy();
			}
		}
		BoxColliderRef->ShapeActors.Empty();
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("BoxColliderRef es nulo"));
	}
}





