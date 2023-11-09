// Fill out your copyright notice in the Description page of Project Settings.


#include "Sensor.h"

// Sets default values
ASensor::ASensor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	mesh->SetOnlyOwnerSee(true);
	mesh->bCastDynamicShadow = false;
	mesh->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	mesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

}

// Called when the game starts or when spawned
void ASensor::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void ASensor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

