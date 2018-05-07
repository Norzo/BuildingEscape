// Markus Andhoy 2018

#include "OpenDoor.h"
#include "Gameframework/Actor.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();

	SetDoorDefault();
	
}

void UOpenDoor::SetDoorDefault()
{
	AActor* Owner = GetOwner();
	FRotator NewRotation = FRotator(0.f, 180.f, 0.f);
	Owner->SetActorRotation(NewRotation);
}

void UOpenDoor::OpenDoor()
{
	// Access the rotation of SM_DOOR
	AActor* Owner = GetOwner();

	// Create a rotator
	FRotator NewRotation = FRotator(0.f, 90.f, 0.f);

	// Set the rotator
	Owner->SetActorRotation(NewRotation);
}





// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Poll the Trigger Volume
	if (PressurePlate->IsOverlappingActor(ActorThatOpens))	// if the ActorThatOpens is in the volume
	{
		OpenDoor();
	}
	else
	{
		SetDoorDefault();
	}
}

