#pragma once

#include "Skill.h"

class GameMoney
{
private:

public:
	void AddMoney();
	void UseMoney();

};
class Gem
{
private:

public:
	void AddMoney();
	void UseMoney();

};

// 아이템을 구입한다.
// player.Use();
//

class Money
{
private:
	int won;
	int dollar;
	int euro;

	// 강사님의 예제
	GameMoney gameMoney;
	Gem gem;

public:
	void MoneySet(int Won, int Dollar, int Euro);

	// 강사님이 만든 예제
	void AddMoney();
	void UseMoney();
};

