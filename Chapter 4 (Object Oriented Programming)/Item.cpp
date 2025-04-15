#include "Item.h"
/* 객체 지향 선언하는 방법
* 반환형 객체이름::함수이름() = 객체에 들어있는 함수를 정의하는 방법
*/
void Item::ShowItemInfo()
{
  cout << "아이템 사용 :" << name << ", 아이템 타입 : "
  << ReturnByTypeName() << ", 가격 : " << price << ", 갯수 : " << itemCount << endl;
    
}

string Item::ReturnByTypeName()
{
  switch (type)
   {
        case ARMOR: return "ARMOR";
            break;
        case WEAPON: return "WEAPON";
            break;
        case USEBLE: return "USEBLE";
            break;
   }
}

void Player::ShowInfo()
{
    cout << "플레이어의 이름 : " << Playername << ", 플레이어의 직업 : " << PlayerType << endl;
}

void Player::GOTOXY(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    int PlayerX = x, PlayerY = y;

    std::cout << "★" << "[" << PlayerX << "," << PlayerY << "]" << "★" << std::endl;
    std::cout << " 해당위치로 플레이어가 이동하였습니다 " << endl;
}
