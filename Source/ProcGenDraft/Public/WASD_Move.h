// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WASD_Move.generated.h"

UCLASS()
class PROCGENDRAFT_API AWASD_Move : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWASD_Move();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
