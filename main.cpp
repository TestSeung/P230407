#include<iostream>
#include "World.h"
#include "Wall.h"
#include "Player.h"
#include "Monster.h"
#include "Ground.h"
#include "Destination.h"
#include "Actor.h"

using namespace std;

class TestActor : public AActor
{

};

int main()
{
	UWorld* World = new UWorld();
	World->SpawnActor(new APlayer());
	World->SpawnActor(new ADestination());
	World->SpawnActor(new AGround());
	World->SpawnActor(new AMonster());
	World->SpawnActor(new AWall());

	delete World;




	return 0;
}