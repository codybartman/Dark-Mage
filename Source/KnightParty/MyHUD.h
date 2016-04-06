// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
*
*/

//Set up execute paths out from Find Row
UENUM(BlueprintType)
enum class EBranches : uint8
{
	Out,
	FunctionFailed
};

UCLASS()
class KNIGHTPARTY_API AMyHUD : public AHUD
{
	GENERATED_BODY()

public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DialogueTable")
	//	void StartQuest;
public:
	// Sets default values for this actor's properties
	AMyHUD();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	//UFUNCTION(BlueprintCallable, Category = "DialogueTable", Meta = (ExpandEnumAsExecs = "Branches"))
	//	void StartQuest(FString TableName, EBranches& MyBranches);


};
