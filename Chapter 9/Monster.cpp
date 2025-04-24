#include "Monster.h"

void Monster::Attack()
{
	CalculateFinalATK();
	cout << "최종 공격력 : " << FinalATK << endl;
}

void Monster::CalculateFinalATK()
{
	// 레벨 * 기본 공격력
	FinalATK = LV * defaultATK;

}
void Slime::Attack() // Monster Attack는 없다. 새로 정의 하겠다.
{
	// Monster 사용한 로직을 그대로 사용하고 싶다.
	Monster::Attack();

	cout << "슬라임의 특수 기능을 실행합니다. " << endl;
}



void Orc::Attack() // Monster Attack는 없다. 새로 정의 하겠다.
{
	// Monster 사용한 로직을 그대로 사용하고 싶다.
	Monster::Attack();

	cout << "오크의 특수 기능을 실행합니다. " << endl;
}

