#include "MyGameEngine.h"
#include "Player.h"
#include "Floor.h"
#include "Wall.h"
#include "Monster.h"
#include "Goal.h"
#include "World.h"

#include "SDL.h"

#pragma comment(lib, "SDL2.lib")
#pragma comment(lib, "SDL2main.lib")


MyGameEngine* MyGameEngine::Instance = nullptr;

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

	//Map LoadLevel
	LoadLevel("level1.dat");
}
