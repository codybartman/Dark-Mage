// Fill out your copyright notice in the Description page of Project Settings.

#include "KnightParty.h"
#include "MyHUD.h"

//Sets default values
AMyHUD::AMyHUD()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyHUD::BeginPlay()
{
	Super::BeginPlay();
}

//Called every frame
void AMyHUD::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


