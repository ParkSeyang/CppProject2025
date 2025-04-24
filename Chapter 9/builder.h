#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;


class TowerOptions
{
protected:
	int Cost;
	int Power;
	int Range;
	int time;
public:
	TowerOptions() {}
	TowerOptions(int cost, int power, int range) : Cost(cost), Power(power), Range(range) {}

	virtual void build();

};

class RifeTower : public TowerOptions
{
public:
	RifeTower()
};

class LaserTower : public TowerOptions
{
public:

private:

};

class CannonTower : public TowerOptions
{

public:


};

class FrostTower : public TowerOptions
{
public:
	

};


