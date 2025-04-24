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
	int Time;
	int Enemy;
public:
	TowerOptions() {}
	TowerOptions(int cost, int power, int range, int time, int enemy) : Cost(cost), Power(power), Range(range), Time(time), Enemy(enemy) {}

	virtual void build(int cost, int time);

	virtual void EnemyAttack(int power, int range, int enemy);
};

class RifeTower : public TowerOptions
{
public:
	RifeTower(int cost, int power, int range, int time, int enemy) : TowerOptions(cost, power, range, time, enemy) {}
	void build(int cost, int time) override;
	void EnemyAttack(int power, int range, int enemy) override;
};

class LaserTower : public TowerOptions
{
public:
	LaserTower(int cost, int power, int range, int time, int enemy) : TowerOptions(cost, power, range, time, enemy) {}
	void build(int cost, int time) override;
	void EnemyAttack(int power, int range, int enemy) override;
};

class CannonTower : public TowerOptions
{

public:
	CannonTower(int cost, int power, int range, int time, int enemy) : TowerOptions(cost, power, range, time, enemy) {}
	void build(int cost, int time) override;
	void EnemyAttack(int power, int range, int enemy) override;
};

class FrostTower : public TowerOptions
{
public:
	FrostTower(int cost, int power, int range, int time, int enemy) : TowerOptions(cost, power, range, time, enemy) {}
	void build(int cost, int time) override;
	void EnemyAttack(int power, int range, int enemy) override;

};


