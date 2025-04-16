#pragma once


#include "Common.h"

// 이름이 Person 구조체
// 정의할 변수, 나이, 이름

/*
* C와 C++의 차이점3. 메모리 동적 할당.
* 
* C 에서 메모리를 동적할당 하는방법 
malloc(Memory allocate) : malloc(크기 sizeof(char) * 10);
* C에서 메모리 해제 시 free(변수 이름) 을 작성해야함.
* 
* C++ 에서 동적 할당을 하는방법
* new : C++에서 동적할당하는 키워드
* delete : 메모리를 해제하는 키워드
* delete[] : 배열전체공간의 메모리를 해제해주는 키워드
*/

/*
* 생성자 : 객체가 데이터를 생성을 할 때 초기화 해주는 기능
* 소멸자 : 객체가 소멸할 때 자동으로 호출되는 기능
*/

/*
* age, name;  age = 20; name ="모험가"
* age = 외부에서 가져온 숫자를 넣어라 = age(age);
* name(name), 주소 = 주소; 생길수있는 문제점이 무엇이 있을까요?
*/

struct Person
{
	int age;
	char* name;         // 길이가 얼마인가? 메모리가 배정 되어 있지 않다. 
	string sName;
	enum Gender
	{
		Boy = 0,
		Girl = 1,
	};

	Gender gender;
	// 디폴트 생성자
	Person() {} 

	// 가장 간단한 문자열 초기화 방식
	Person(int age, const string& sName) : age(age), sName(sName) {} // <-이러한 초기화 방식을 
	                                                                 // 멤버 이니셜라이징 이라고한다. 
	// 멤버 이니셜라이징의 장점 : 외부에서 따로생성하지않고 바로불러오기때문에 동작이 속도가 조금 더 빠르다.
	                            
	Person(int age)  // 코딩을 불러올때 외부에서 매개변수로 받고 불러오기 때문에 느리다.
	{
		this->age = age;
	}

	// 생성자 오버로딩
	Person(int age, const char* str,Gender&gender2) :age(age)
	{
		// char * name을 사용하기위해서는 메모리 공간을 직접 생성해줘야한다.
		name = new char[strlen(str) + 1];
		// 새로 생성한 공간에 외부에 있는 데이터를 복사해서 옮겨와야 한다.
		strcpy(name, str);
		switch (gender2)
		{
		case Person::Boy:
			cout << "이 플레이어의 성별은 남자입니다." << endl;
			break;
		case Person::Girl:
			cout << "이 플레이어의 성별은 여자입니다." << endl;
			break;
		default:
			cout << "잘못된 값을 입력받았습니다." << endl;
			break;
		}
	}
	// 소멸자 : 객체가 소멸될 때 자동으로 호출된다.
	~Person()
	{
		cout << "Person의 소멸자가 호출되었습니다." << endl;
		delete[] name;
	}

	void Clone(const Person& other);


	void Show() const;  //  함수뒤에 const를 사용하는이유 : 
	                    // 1. 객체 내부의 데이터를 변경없이 사용하겠다. 
	                    // 2. 사용자에게 용도를 알려준다.
};
