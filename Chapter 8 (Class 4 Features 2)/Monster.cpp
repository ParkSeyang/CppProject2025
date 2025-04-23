
#include "Monster.h"

void Attacker::Attack()
{
	cout << "공격한다." << endl;
}

Attacker* Unit::ReturnAttacker()
{
	return attacker;
}

void Unit::Attack()
{
	cout << "유닛이 공격한다." << endl;
}

void Probe::Attack()
{
	cout << "소형 타입의 공격을 한다." << endl;
}

void Probe::UseSkill()
{
}

void Zealot::Attack()
{
	cout << "소형 타입의 공격을 한다." << endl;
	cout << "연속해서 두번 공격한다." << endl;
}

void Zealot::UseSkill()
{
}

void Dragon::Attack()
{
	cout << "중형 타입의 공격을 한다." << endl;
	cout << "일정 학률로 공격이 빗나간다." << endl;
}

void Dragon::UseSkill()
{
}
