#include "Item.h"
#include "Player.h"
/* 객체 지향 선언하는 방법
* 반환형 객체이름::함수이름() = 객체에 들어있는 함수를 정의하는 방법
*/
void Item::ShowItemInfo()
{
	cout << "아이템 이름 : " << name << ", 아이템 타입 : "
		<< ReturnByTypeName() << ", 가격 : " << price << ", 갯수 : " << itemCount << endl;
}

string Item::ReturnByTypeName()
{
	switch (type)
	{
	case ARMOR: return "ARMOR";
	case WEAPON: return "WEAPON";
	case USEABLE: return "USEABLE";
	default: return "예외 사항이 출력되었습니다.";
	}
}

