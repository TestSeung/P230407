#include "Wall.h"

AWall::AWall()
{
	bIsCollision = true;
}

AWall::AWall(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	SortOrder = 2;
	bIsCollision = true;
	//X = NewX;
	//Y = NewY;
	//Shape = NewShape;
}

AWall::~AWall()
{
}
