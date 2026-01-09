// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridSpawner.generated.h"

UCLASS()
class BLOCKHEADCPP24_API AGridSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	int32 value = 0;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "C++ Variables")
	int editAnywhere = 0;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "C++ Variables")
	int visibleAnywhere = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "C++ Variables")
	int BPReadWriteAnywhere = 0;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "C++ Variables")
	int editDefaultsOnly = 0;
	
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "C++ Variables")
	int visibleInstanceOnly = 0;
	
	UPROPERTY(Transient, BlueprintReadWrite, Category = "C++ Variables")
	int transient = 0;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
