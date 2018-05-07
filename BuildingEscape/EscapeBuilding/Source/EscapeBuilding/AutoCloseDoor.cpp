// Markus Andhoy 2018

#include "AutoCloseDoor.h"
#include "OpenDoor.h"
#include "Gameframework/Actor.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UAutoCloseDoor::UAutoCloseDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAutoCloseDoor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UAutoCloseDoor::AutoCloseDoor()
{
	// Access the rotation of SM_DOOR
	AActor* Owner = GetOwner();

	// Create a rotator
	FRotator NewRotation = FRotator(0.f, 90.f, 0.f);

	// Set the rotator
	Owner->SetActorRotation(NewRotation);
}


// Called every frame
void UAutoCloseDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

