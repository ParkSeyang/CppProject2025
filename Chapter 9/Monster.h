#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

// 몬스터 - 몬스터 조작, 관리

// 몬스터는 공격을 한다.

// 몬스터의 공격 규칙

// 최종 공격력 - 

// 이번 수업에서 배울것.
// 오버 라이드(Override)
// 
// Monster::Attack();
// Slime::Attack();
// Slime의 입장 몬스터 Attack, Slime Attack 어떤 Attack를 사용해야 하는가?
// 부모의 함수를 대체한다.
// virtual, override
// virtual : 코드가 실제하지 않는다. -> 다른 곳에서 이 함수를 찾아서 사용해라.
// override : 같은 이름의 함수를 자식에서 선언하면 부모의 코드가 숨겨진다.
// 
// 슬라임, 고블린, 오크
// Monster.Attack();
// Slime.Attack();
// Goblin.Attack();
// Orc.Attack();
// 
// 슬라임, 오크, 고블린.. 이런 코드는 확정성의 문제가 있다. -> 새로추가할 몬스터의 개성을 추가할 수 없다.
//
// override 키워드
//

class ElementTYPE
{

};
class Monster  // 몬스터 is 속성? X , 몬스터 has 속성? O
{
protected:
	int LV;
	int defaultATK;
	int FinalATK;
	ElementTYPE* type;

public:
	Monster() {}
	Monster(int lv, int defaultATK) : LV(lv), defaultATK(defaultATK) {}
	


public:
	virtual void Attack();

	void CalculateFinalATK();
};

class Slime : public Monster
{
public:
	Slime(int lv, int defaultATK) : Monster(lv, defaultATK) {}

public:
	void Attack() override;


};

class Orc : public Monster
{
public:
	Orc(int lv, int defaultATK) : Monster(lv, defaultATK) {}

public:
	void Attack() override;


};


