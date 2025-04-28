#pragma once
#include "Common.h"
#include "Utility.h"
class Runner
{
private:
	int run;
	bool isend;

protected:
	int minSpeed;
	int maxSpeed;

	string symbol;

public:
	Runner() : run(0),isend(false), minSpeed(1),maxSpeed(5), symbol("E") {}
	Runner(string symbol) : run(0), isend(false), minSpeed(1), maxSpeed(5), symbol(symbol) {}

	virtual void Run();

	bool CheckEndLine(int length);
};

class Player : public Runner
{
private:

public:
	Player() : Runner() 
	{
		symbol = "P";
	}
	
	Player(string symbol) : Runner(symbol) {}
	void Run() override;
	void Upgrade();

};

