#pragma once

//
// Player 기능을 구현
// Enemy  기능을 구현
// Player. Enemy 객체의 공통적인 데이터가 있다.
// 상속. 
// 모든 것을 상속해줘야 하는가?
// 부모 - 자식
// 
// Character 클래스가 Entity 클래스를 사용하고 있다.
// Character 클래스가 Entity 클래스의 자식클래스다.
// Child              Parent
// Derived            base
//


// 접근 제어 지시자
// Protected : 자식에게는 열려있고 그 이외에는 접근을 못하게 막는 것.
// 부모가 자식에게 모든 것을 넘겨주고 싶지 않을 수 있습니다.
// 부모가 자기 자신에서만 사용하고 싶은 것은 private 선언하고
// 자식에서도 변경하고싶은 것은 protected 선언한다.

// 1. Enemy, player 둘다 체력, 공격력, 방어력 을 가지도록하세요
// 2. 체력을 사용하는 시스템을 Entity 공통으로 구현가능 하다면 private으로 설계를 한다.

class Entity
{
protected:
	int HP;
	int ATK;
	int DEF;

public:
	int GetHP();
	int GetATK();
	int GETDEF();
	void SetHP(int value);
	void SetATK(int value);
	void SetDEF(int value);



	
};

