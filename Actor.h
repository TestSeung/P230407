#pragma once


class AActor
{
public:
	AActor();
	AActor(int NewX, int NewY, char NewShape);
	virtual ~AActor();

	virtual void Input(); 
	virtual void Tick();
	virtual void Render();

public: // protected로 해야함 X,Y값 컨트롤러로 사용
	int X;
	int Y;
	char Shape;

};

