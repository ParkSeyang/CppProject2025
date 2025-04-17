#pragma once
#include "Common.h"
#include "Image.h"

enum TurnSystem
{
	PLAYERTURN,
	ENEMYTURN,
	GAMECLEAR,
	GAMEOVER
};

enum BattleState
{
	IDLE,
	MOVE,
	BATTLE
};

struct Enemy
{
	int HP;
	int ATK;
	int DEF;
	string name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1];
	BattleState battleState;

	Enemy(int HP, int ATK, int DEF, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
		: HP(HP), ATK(ATK), DEF(DEF), name(name)
	{
		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}
	// 기능선언
	void ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);
	void ShowImage(int& posx, int& posy);

	// 조건에 해당하는 기능
	 bool IsBattle(int x, int y);
	 bool IsWalk(int x, int y);
	 bool ISIdle(int x, int y);

	// 기능을 조합해서 또다른 하나의 새로운 기능으로 표현한다.
	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posx, int& posy);
};
