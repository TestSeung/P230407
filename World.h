#pragma once
#include<vector>
class AActor; //전방선언, 어딘가 쓸때 가져다 써라, 포인터일때 쓸 수 있다.포인터

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();


	
	void SpawnActor(AActor* NewActor);

public:
	std::vector <AActor*> Actors; //포인터로 언젠간쓰겠다


};