#include "MyGameEngine.h"
#include "Player.h"
#include "Floor.h"
#include "Wall.h"
#include "Monster.h"
#include "Goal.h"
#include "World.h"

MyGameEngine::MyGameEngine()
{
}

MyGameEngine::~MyGameEngine()
{
}

void MyGameEngine::Init()
{
	GameEngine::Init();
	//__super::Init();

	//Map Load
	Load("level1.dat");
}