// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Controllers/PxcAIController.h"
#include "Actors/Roles/PxcLogicRole.h"
#include "Actors/Characters/PxcGraphCharacter.h"

APxcLogicRole* APxcAIController::GetLogicRole()
{
	return m_pLogicRole;
}

void APxcAIController::SpawnLogicRole()
{
	FActorSpawnParameters Param;
	Param.Owner = this;
	if (m_cLogicRole)
		m_pLogicRole = GetWorld()->SpawnActor<APxcLogicRole>(m_cLogicRole, Param);
	else
		m_pLogicRole = GetWorld()->SpawnActor<APxcLogicRole>(Param);
	check(IsValid(m_pLogicRole));
	m_pLogicRole->SetTheGraphCharacter(GetPawn<APxcGraphCharacter>());
}