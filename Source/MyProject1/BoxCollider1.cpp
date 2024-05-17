// Fill out your copyright notice in the Description page of Project Settings.

#include "Shape1.h"
#include "Shape.h"
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

	



	//if (objetoA && objetoB)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("hubo una colision "));

	//	UE_LOG(LogActor, Warning, TEXT("Hubo una colision entre %s y %s"), *objetoA->GetName(), *objetoB->GetName());

	//	// Si la nave choca con un BoxCollider
	//	if (objetoA == nave || objetoB == nave)
	//	{
	//		ABoxCollider1* boxCollider = (objetoA == nave) ? Cast<ABoxCollider1>(objetoB) : Cast<ABoxCollider1>(objetoA);
	//		if (boxCollider)
	//		{
	//			if (boxCollider->isTouched)
	//			{
	//				nave->DestroyAllShapes();
	//				
	//			}
	//			else
	//			{
	//				boxCollider->isTouched = true;
	//				UWorld* const World = GetWorld();
	//				AShape1* nuevoShape = World->SpawnActor<AShape1>(objetoA->GetActorLocation() + FVector(100, 100, 0), objetoB->GetActorRotation());
	//				nave->addShape(nuevoShape);
	//			}
	//		}
	//	}
	//}
}



