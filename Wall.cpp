#include "Wall.h"

AWall::AWall()
{
	bIsCollision = true;
	R = 255;
	G = 0;
	B = 0;
}

AWall::AWall(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	SortOrder = 2;
	bIsCollision = true;
	//X = NewX;
	//Y = NewY;
	//Shape = NewShape;
	R = 255;
	G = 0;
	B = 0;
}

AWall::~AWall()
{
}
