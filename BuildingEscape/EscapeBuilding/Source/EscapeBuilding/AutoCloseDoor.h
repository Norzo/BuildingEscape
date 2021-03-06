// Markus Andhoy 2018

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AutoCloseDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPEBUILDING_API UAutoCloseDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAutoCloseDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void AutoCloseDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
