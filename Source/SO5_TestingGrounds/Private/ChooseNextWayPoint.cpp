// Fill out your copyright notice in the Description page of Project Settings.

#include "ChooseNextWayPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"


EBTNodeResult::Type UChooseNextWayPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
{
	//UE_LOG(LogTemp, Warning, TEXT("AI IN C++"));
	auto BlackBoardComp = OwnerComp.GetBlackboardComponent();
	
	auto Index = BlackBoardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	auto NextWayPoint = BlackBoardComp->GetValueAsObject(TargetPoint.SelectedKeyName);

	UE_LOG(LogTemp, Warning, TEXT("NEXT WAY POINT %i"), Index);


	return EBTNodeResult::Succeeded;

}


