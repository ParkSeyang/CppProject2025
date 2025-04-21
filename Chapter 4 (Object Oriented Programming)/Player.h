#pragma once
#include "Game.h"

struct Player
{
	// 플레이어의 좌표 데이터를 정의
	int xPos;
	int yPos;
	string name;

	// 좌표를 기능적으로 함수로 구현해보세요.
	void ShowInfo();
	void ChangePos(int x, int y);
};