#pragma once
#include "Common.h"
#include "Utility.h"

enum PlayerStat
{
	MINSPPED, MAXSPEED , NONE
};

class Runner
{
private:
	bool isend;

protected:

	PlayerStat stat;
	int run;
	int minSpeed;
	int maxSpeed;
	int money;

	string symbol;

	virtual void SetMaxSpeed(); // 변경될 수 있는 함수
	void DrawMoveDistance();    // 변경되면 안되는 함수
	virtual void SetShape();    // 변경될 수 있는 함수


public:
	Runner() : run(0),isend(false), minSpeed(1),maxSpeed(5), symbol("E"),stat(PlayerStat::NONE), money(1000) {}
	Runner(string symbol) : run(0), isend(false), minSpeed(1), maxSpeed(5), symbol(symbol), stat(PlayerStat::NONE),money(1000) {}

	void Run();

	bool CheckEndLine(int length);

	virtual void ShowPlayerGameInfo(); // dynamicCast<> 대체

	void Upgrade(PlayerStat selectedStat); 
	void Upgrade(PlayerStat selectedStat, int amount);

	void SetMin(int value);
	void SetMax(int value);

	void Initialize();
};

class Player : public Runner
{
protected:
	void SetMaxSpeed() override;
	void SetShape() override;
	
public:
	Player() : Runner() 
	{
		symbol = "P";
	}
	
	Player(string symbol) : Runner(symbol) {}

	void ShowPlayerGameInfo() override;
};


class Enemy : public Runner
{
protected:
	void SetMaxSpeed() override;
	void SetShape() override;

public:
	Enemy() : Runner()
	{
		symbol = "E";
	}

	Enemy(string symbol) : Runner(symbol) {}

};