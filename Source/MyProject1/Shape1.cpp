// Fill out your copyright notice in the Description page of Project Settings.


#include "Shape1.h"
#include "UObject/ConstructorHelpers.h"//propias de unreal ayuda de constructor
#include "Materials/MaterialInterface.h"

TArray<UStaticMesh*> AShape1::MeshArray;
TArray<UMaterialInterface*> AShape1::MaterialArray;

// Sets default values
AShape1::AShape1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(Root);

    malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Mesh"));
    malla->AttachTo(Root);

    velocity = 0; 
	AsignarMalla();

	AsignarMaterial();
    //malla->SetSimulatePhysics(true);
}


// Called when the game starts or when spawned
void AShape1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShape1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
   AShape1::mover();
   //AShape1::saltar();

}

void AShape1::AsignarMalla()
{
    if (MeshArray.Num() == 0)
    {
        //UStaticMesh* Disfraz1, * Disfraz2, * Disfraz3, * Disfraz4, * Disfraz5, * Disfraz6;
        UStaticMesh* Disfraz1 = LoadObject<UStaticMesh>(nullptr, 
            TEXT("/Game/StarterContent/Props/SM_Couch.SM_Couch"));
        UStaticMesh* Disfraz2 = LoadObject<UStaticMesh>(nullptr, 
            TEXT("/Game/StarterContent/Props/SM_Chair.SM_Chair"));
        UStaticMesh* Disfraz3 = LoadObject<UStaticMesh>(nullptr, 
            TEXT("/Game/StarterContent/Props/SM_TableRound.SM_TableRound"));
        UStaticMesh* Disfraz4 = LoadObject<UStaticMesh>(nullptr, 
            TEXT("/Game/StarterContent/Props/SM_Lamp_Wall.SM_Lamp_Wall"));
        UStaticMesh* Disfraz5 = LoadObject<UStaticMesh>(nullptr, 
            TEXT("/Game/StarterContent/Props/SM_CornerFrame.SM_CornerFrame"));
        UStaticMesh* Disfraz6 = LoadObject<UStaticMesh>(nullptr, 
            TEXT("/Game/StarterContent/Props/SM_Rock.SM_Rock"));
        
        MeshArray.Add(Disfraz1);
        MeshArray.Add(Disfraz2);
        MeshArray.Add(Disfraz3);
        MeshArray.Add(Disfraz4);
        MeshArray.Add(Disfraz5);
        MeshArray.Add(Disfraz6);
    }

    

    int32 RandomIndex = FMath::RandRange(0, MeshArray.Num() - 1);
    UStaticMesh* SelectedMesh = MeshArray[RandomIndex];

    if (SelectedMesh)
    {
        MeshComponent->SetStaticMesh(SelectedMesh);
    }
}

void AShape1::AsignarMaterial()
{
    if (MaterialArray.Num() == 0)
    {

        UMaterialInterface* Material1 = LoadObject<UMaterialInterface>(nullptr, 
            TEXT("/Game/StarterContent/Props/Materials/M_Bush.M_Bush"));
        UMaterialInterface* Material2 = LoadObject<UMaterialInterface>(nullptr, 
            TEXT("/Game/StarterContent/Props/Materials/M_Rock.M_Rock"));
        UMaterialInterface* Material3 = LoadObject<UMaterialInterface>(nullptr, 
            TEXT("/Game/StarterContent/Props/Materials/M_Statue.M_Statue"));
        UMaterialInterface* Material4 = LoadObject<UMaterialInterface>(nullptr, 
            TEXT("/Game/StarterContent/Props/Materials/M_TableRound.M_TableRound"));
        UMaterialInterface* Material5 = LoadObject<UMaterialInterface>(nullptr, 
            TEXT("/Game/StarterContent/Props/Materials/M_Frame.M_Frame"));
        UMaterialInterface* Material6 = LoadObject<UMaterialInterface>(nullptr, 
            TEXT("/Game/StarterContent/Props/Materials/M_Chair.M_Chair"));

        MaterialArray.Add(Material1);
        MaterialArray.Add(Material2);
        MaterialArray.Add(Material3);
        MaterialArray.Add(Material4);
        MaterialArray.Add(Material5);
        MaterialArray.Add(Material6);
        // UMaterialInterface* Material5 = LoadObject<UMaterialInterface>(nullptr, TEXT(""));

    }

    int32 RandomIndex = FMath::RandRange(0, MaterialArray.Num() - 1);
    UMaterialInterface* SelectedMaterial = MaterialArray[RandomIndex];

    if (SelectedMaterial)
    {
        MeshComponent->SetMaterial(0, SelectedMaterial);
    }

}

void AShape1::mover()
{
    //mensaje del Ingeniero
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("comienza el movimiento")); 
    SetActorLocation(GetActorLocation() + FVector(10.0f, 0.0f, 0.0f));
}
void AShape1::saltar()
{
    MeshComponent->SetSimulatePhysics(true);
    FVector Impulse = FVector(0.0f, 0.0f, 60000.0f);
    MeshComponent->AddForce(Impulse);
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("salta"));
}

void AShape1::DestruirFigura()
{
    Destroy();
}


