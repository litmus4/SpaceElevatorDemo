// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PxcAIController.generated.h"

class APxcLogicRole;

/**
 * 
 */
UCLASS()
class UEGAME_API APxcAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure)
	APxcLogicRole* GetLogicRole();

	void SpawnLogicRole();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<APxcLogicRole> m_cLogicRole;

	UPROPERTY(BlueprintReadOnly)
	APxcLogicRole* m_pLogicRole = nullptr;
};
