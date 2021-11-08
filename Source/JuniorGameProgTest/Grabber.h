// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JUNIORGAMEPROGTEST_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	float GrabPoint = 350.f;

	UPROPERTY(EditAnywhere)
	float Radius = 600.f;

	UPROPERTY(EditAnywhere)
	float Speed = 3000.f;

	UPhysicsHandleComponent* PhysicsHandle = nullptr;
	UInputComponent* InputComponent = nullptr;
	UStaticMeshComponent* move = nullptr;

	void Grab();
	void Release();
	void Shoot();
	void FindPhysicsHandle();
	void SetupInputComponent();

	// Return the first Actor within reach with physics body
	FHitResult GetFirstPhysicsBodyInReach() const;

	// Return Grab point
	FVector GetPlayersGrabPoint() const;

	// Return Line Trace End
	FVector GetPlayersRadius() const;

	// Get Player Position In World
	FVector GetPlayersWorldPos() const;

	// // Get Player Rotation In World
	FRotator GetPlayersWorldRotation() const;

};
