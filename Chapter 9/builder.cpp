#include "builder.h"

void TowerOptions::build(int cost, int time)
{
	cout << "이 건물의 건축 비용은 " << cost << " 입니다." << endl;
	cout << "이 건물의 완성 시간은 " << time << " 입니다." << endl;
}

void TowerOptions::EnemyAttack(int power, int range, int enemy)
{
	if (enemy > 0)
	{
		cout << range << " 사거리 안에 적이 감지되었습니다." << endl;
	}

	if (enemy > 0)
	{
		cout << enemy << " 명의 적을 공격하였습니다." << endl;
		cout << enemy << " 명의 적이 " << power << " 만큼의 피해를 입었습니다." << endl;
	}
}

void RifeTower::build(int cost, int time)
{
	cout << "[RifeTower] ";
	TowerOptions::build(cost, time);
}

void RifeTower::EnemyAttack(int power, int range, int enemy)
{
	cout << "[RifeTower] 총알 공격!" << endl;
	TowerOptions::EnemyAttack(power, range, enemy);
}

void LaserTower::build(int cost, int time)
{
	cout << "[LaserTower] ";
	TowerOptions::build(cost, time);
}

void LaserTower::EnemyAttack(int power, int range, int enemy)
{
	cout << "[LaserTower] 레이저 공격!" << endl;
	TowerOptions::EnemyAttack(power, range, enemy);
}

void CannonTower::build(int cost, int time)
{
	cout << "[CannonTower] ";
	TowerOptions::build(cost, time);
}

void CannonTower::EnemyAttack(int power, int range, int enemy)
{
	cout << "[CannonTower] 포탄 공격!" << endl;
	TowerOptions::EnemyAttack(power, range, enemy);
}

void FrostTower::build(int cost, int time)
{
	cout << "[FrostTower] ";
	TowerOptions::build(cost, time);
}

void FrostTower::EnemyAttack(int power, int range, int enemy)
{
	cout << "[FrostTower] 냉기 광선 공격!" << endl;
	TowerOptions::EnemyAttack(power, range, enemy);
}
