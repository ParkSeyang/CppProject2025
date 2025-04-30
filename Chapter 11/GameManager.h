#pragma once

// main() 프로그램 시작 -> 게임시작 -> 게임종료

#include"Runner.h"
#include <conio.h>

class GameManager
{
private:
	Player* player = new Player();

	void ShowTitle();
	void ShopPhase();
	void GamePhase();

public:
	GameManager()
	{
		player = new Player();
	}
	void Play();

};

