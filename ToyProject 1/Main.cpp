/*
* 목표 :  cpp 게임 화면 구성하기
* 복습 : Windows.h Gotoxy() 재구현
* 입출력 : cpp 방식으로 입출력하기
* 이론 : namespace 응용해보기
*/
/*
* 이름공간을 사용할 때의 장점
* 1. 다른 두 프로젝트를 copy paste 합칠 때 발생하는 문제를 최소화 할 수 있다.
* 2. 이름공간에 쓰여진 이름을 통해서 코드를 분류할  수 있다.
*/
/*
*  목표2 : 플레이어의 이동을 참조자를 사용하여 함수화 해보기.
*/
#include <iostream>
#include <Windows.h> // 커서의 위치를 옮기는 함수 SetCursorPosition
#include <conio.h>   // _getch 입력 대기함수
#include <string>    // 문자열의 기능을 포함하고 있는 라이브러리
#include <iomanip>   // 약자 (Input Output Manipulate 라이브러리)

namespace ConsoleUtils
{
	void GoToXY(int x, int y)
	{
		COORD pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	void InputPlayerKey(int& x, int& y)
	{
		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_LEFT)) // 키보드 '<-' 눌렀을때
			{
				x--;
				if (x<0)
				{
					x = 0;
				}
			}
			else if (GetAsyncKeyState(VK_RIGHT))
			{
				x++;
				if (x > 30)
				{
					x = 30;
				}
			}
			else if (GetAsyncKeyState(VK_UP))
			{
				y--;
				if (y<0)
				{
					y = 0;
				}
			}
			else if (GetAsyncKeyState(VK_DOWN))
			{
				y++;
				if (y> 30)
				{
					y = 30;
				}
			}
		}
	}

}

struct Item
{
	// char name[20]; std::string 은 이름의 크기를 자동으로 할당해준다.
	std::string name;
	int price;
};

// Item 구조체의 참조자를 받아와서 이름을 원하는 이름으로 변경하고 가격을 원하는 가격으로 설정하는 함수를 만든다.

// const 사용, 참조자 사용, Item 구조체 사용


void MySetItem(Item& itemname,const std::string name,int Price)
{
	std::cout << "해당 " << name << " 의 가격 : " << Price << std::endl;

}


void SetItem(Item& item, const std::string Nname, int price)
{
	item.name = Nname; // 외부에서 가져온 item을 Nname으로 설정해준다.
	item.price = price;
}

void SetItem(Item& Setitem, const Item& copyItem) // ShopItem 항목,
{
	Setitem.name = copyItem.name;
	Setitem.price = copyItem.price;
}
// default 매개 인자: 함수 호출 시에 매개 변수를 부족하게 입력하면 자동으로 변수에 대입된다.
// ShowShop(Shop, 3,10,10);
// Shop, length << default가 아니기 때문에 앞부분에 작성 해줘야 된다
void ShowShop(Item shop[], int length, int x = 10, int y = 10)
{
	ConsoleUtils::GoToXY(x, y);
	// #include <iomanip> std::left, right 왼쪽, 오른쪽 정렬
	// std:: setw(20); 문자열의 크기가 20공간을 만든다. 문자열의 빈공간은 공백 문자로 출력한다.
	std::cout <<std::left <<std::setw(20) << "아이템 이름" << "|" 
		<< std::setw(10) << "아이템 가격" << std::endl;

	for (int i = 0; i < length; i++)
	{
		// std::cout << "이름 : " << ItemA.name << " ,  가격 : " << ItemA.price << std::endl;
		// std::cout << "이름 : " << shop[i].name << " ,  가격 : " << shop[i].price << std::endl;
		ConsoleUtils::GoToXY(x, y + 1 + i); // 표의 틀보다 1칸아래에 있어야 하기때문에 1을 더해줌 i만큼더해준다.
		std::cout << std::left << std::setw(20) << shop[i].name << "|" 
			<< std::setw(10) << shop[i].price << "|" << std::endl;
	}
}

//shop배열, 선택한 인덱스, item 배열 인벤토리.
// copyItem 
// 상점(Item 배열)에 있는 데이터를 복사해서, 유저의 아이템 배열에 가져온다. 배열의 데이터를 변경한다.

Item& GetItem(Item shop[], int length, int index)
{
	if (index >= length)
	{
		std::cout << " 등록되지 않은 아이템을 선택하여 0번째 아이템이 반환됩니다." << std::endl;
		return shop[0];
	}
	return shop[index];
}

void AddInventory(Item inventory[], int length, int index, const Item& buyItem)
{
	inventory[index].name = buyItem.name;
	inventory[index].price = buyItem.price;
}
int main()
{
	std::cout << " 아이템 예제 " << std::endl;
	
	Item ItemA;
	Item ItemB;
	Item ItemC;

	SetItem(ItemA, "Apple", 100);
	SetItem(ItemB, "Banana", 500);
	SetItem(ItemC, "Candy", 50);

	Item Shop[3]{ ItemA,ItemB,ItemC };

	Item Inventory[3];

	ShowShop(Shop,3,0,0);
	std::cout << "구매하고 싶은 아이템 번호를 입력해주세요 " << std::endl;
	int input;
	std::cin >> input;

	AddInventory(Inventory, 3, 0, GetItem(Shop, 3, input - 1));
	// 사용 예시
	// 상점으로 부터 인벤토리에 아이템을 추가하는 것.
	// 몬스터 데이터가 여러개가 있는데 현재 배틀 중에 등장할 몬스터를 선택한다.
	// 몬스터 데이터를 불러오는거
	// Stage정보가 있는데 특정 스테이지를 호출하고 싶다.

	std::cout << "인벤토리의 아이템 확인 " << std::endl;
	std::cout << Inventory[0].name << "," << Inventory[0].price << std::endl;

	// SetItem(ItemA, "Apple", 100);
	// SetItem(ItemB, ItemA);
	// std::cout << "이름 : " << ItemA.name << " ,  가격 : " << ItemA.price << std::endl;
	// std::cout << "이름 : " << ItemB.name << " ,  가격 : " << ItemB.price << std::endl;
	_getch();

	// 예제 1. 10,10 좌표에 플레이어의 정보 텍스트를 출력해보세요.
	ConsoleUtils::GoToXY(10, 10);
	std::cout << "플레이어 의 정보";

	// 예제 2. 플레이어 의 이름을 입력받아서 플레이어의 엉보 텍스트 한줄 아래에 출력하기.
	// 입력 값을 정수로 받아서, 1을받으면 플레이어 이름 추가하기.
	//2를 받으면 화면에 플레이어 정보를 출력하기

	

	char name[10];

	while (true)
	{
		int inputNumber = 0;

		std::cout << "1. 사용자의 이름을 변경 할수 있습니다."<< std::endl;
		std::cout << "2. 플레이어의 정보를 화면에 출력합니다" << std::endl;
		std::cin >> inputNumber;

		if (inputNumber == 1)
		{
			std::cout << "이름을 입력해주세요. : " << std::endl;
			std::cin >> name;			
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "플레이어 의 정보";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "플레이어의 이름 :" << name;
			_getch();
		}
		else
		{
			std::cout << "Error" << std::endl;
			break;
		}
		system("cls");
	
	}
	
	int height = 5;
		int length = 5;
	while (true) // 플레이어의 이동구현
	{
		system("cls");
		ConsoleUtils::InputPlayerKey(height, length);
		std::cout << "플레이어 의 좌표 : " << "[" << height << "," << length << "]" << std::endl;
		ConsoleUtils::GoToXY(height, length);
		std::cout << "○";
	}


}