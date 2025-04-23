#pragma once

#include "Common.h"

class Monster
{

};

// 프로젝트 간단하게 시작하는 방법
// 1. 여러분들이 익숙한 게임을 가져온다.
// 2. 하나의 데이터를 선택해서 객체로 표현한다.

// Has-A 개념 파악

// virtual 키워드를 언제 추가하고, 언제 사용을 안하는가?
// 코드를 상속하는 객체의 기능이 추가적인 특징을 갖는다. virtual, 함수 오버라이딩
// virtual 기능을 사용할필요가없을때 
// 모든 유닛을 멈춘다라는 기능이 동일하다.. 등등 동일한기능이있을때

class Attacker
{
public:
	void Attack();
};

class Flyer
{

};

class Unit  // 모든 유닛은 공격가능한가?
{
	Attacker* attacker;
	Flyer* flyer;

	bool isAttackable;

public:
	Unit()
	{
		attacker = new Attacker();
	}
	Unit(bool attackable)
	{
		isAttackable = attackable;
		if (attackable)
		{
			attacker = new Attacker();
		}
	}

public:

	Attacker* ReturnAttacker();
	virtual void Attack();
	virtual void Stop();
	void Move();
	void Patrol();
	void Hold();
	virtual void UseSkill();
};

class Factory
{

};

class Nexus : public Factory
{

};

class GateWay : public Factory
{

};

class Probe : public Unit  // 프로브는 유닛인가요?
{
public:
	Probe(bool attackable) : Unit(attackable) {}

	void Attack();
	void Stop();
	void UseSkill();
};

class Zealot : public Unit
{
public:
	void Attack();
	void Stop();
	void UseSkill();
};

class Dragon : public Unit
{
public:
	void Attack();
	void Stop();
	void UseSkill();
};

