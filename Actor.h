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

public: // protected�� �ؾ��� X,Y�� ��Ʈ�ѷ��� ���
	int X;
	int Y;
	char Shape;

};

