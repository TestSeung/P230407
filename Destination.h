#pragma once
#include"Actor.h"

class ADestination : public AActor
{
public:
	ADestination();
	virtual~ADestination() override;
protected:
	void EndPoint(int Xpos,int Ypos);

};

