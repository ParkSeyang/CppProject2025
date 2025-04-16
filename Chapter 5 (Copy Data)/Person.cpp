#include "Person.h"

/*
* 얕은 복사 : 데이터의 값을 그대로 다른변수에 가져오는 것. 크기가 작을 때 사용.
* 깊은 복사 : 주소를 새로 할당해서 값을 복사해서 저장하는 것. 새 메모리 공간이 할당됨.
*/

string Gender(Person::Gender gender)
{
	switch (gender)
	{
	case Person::Boy && 0:
		cout << "이 플레이어의 성별은 남자입니다." << endl;
		break;
	case Person::Girl && 1:
		cout << "이 플레이어의 성별은 여자입니다." << endl;
		break;
	default:
		cout << "잘못된 값을 입력받았습니다." << endl;
		break;
	}
}

void Person::Clone(const Person& other)
{
	// 얕은 복사 -> 깊은 복사로 변경해줘야한다.
	age = other.age; 
	name = new char[strlen(other.name) + 1]; // 새로운 메모리 공간 생성
	strcpy(name, other.name);

}


void Person::Show() const
{
	cout << "나이 : " << age << endl;
	cout << "이름 : " << name << endl;
	

}
