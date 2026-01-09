// Fill out your copyright notice in the Description page of Project Settings.


#include "GridSpawner.h"

// Sets default values
AGridSpawner::AGridSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGridSpawner::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning , TEXT("=================== TESTING ===================="));
	UE_LOG(LogTemp, Display, TEXT("=================== TESTING ===================="));

	
	
	
		
	TArray<int32> arr;
	
	TMap<FString, int32> score;
	
	score.Add(TEXT("Ivan"), 100);
	
	int32* pScore = score.Find(TEXT("Ivan"));
	
	if (pScore != nullptr)
	{
		
	}
	
	TSet<int32> numbers;
	
	numbers.Add(5);
	
	bool ContainsFine = numbers.Contains(5);
	
}

// Called every frame
void AGridSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

