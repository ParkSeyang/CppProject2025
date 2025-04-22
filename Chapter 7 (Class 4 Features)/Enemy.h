#pragma once


// 시나리오
// A개발자 - B개발자
// Player기능을 구현을 해두었습니다.
// A개발자 : B개발자님 Player에 있는 전투데이터를 사용해서 Enemy의 전투 시스템을 만들어주세요.
// B개발자 : A개발자님 상속해서 구현해보겠습니다.
// A개발자 : OK

// 1. 이미 구현되어 있는 코드를 공통된 기능을 추출하는 작업
// 2. 상속을 하고 있는 공통 객체. 객체를 만드는 방법

#include <iostream>
#include "Entity.h"
using namespace std;

enum BehaviorPattern
{
	AGGRESSIVE,DEFENSIVE,COWARD
};

class Enemy : public Entity
{
private:
	BehaviorPattern currentPattern;

private:
	// ATK, HP, DEF 전투 시스템을 구현한다.
	void Attacked();
	void Defence();
	void Recovery();
	void BehaviorAI();
public:
	void Action();
};

