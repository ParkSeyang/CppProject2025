#pragma once
#include "Common.h"
#include "Utility.h"
class Runner
{
private:
	bool isend;

protected:
	int run;
	int minSpeed;
	int maxSpeed;

	string symbol;

	virtual void SetMaxSpeed(); // 변경될 수 있는 함수
	void DrawMoveDistance();    // 변경되면 안되는 함수
	virtual void SetShape();    // 변경될 수 있는 함수


public:
	Runner() : run(0),isend(false), minSpeed(1),maxSpeed(5), symbol("E") {}
	Runner(string symbol) : run(0), isend(false), minSpeed(1), maxSpeed(5), symbol(symbol) {}

	void Run();

	bool CheckEndLine(int length);
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