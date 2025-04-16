/*
* 작성일 : 2025-04-16
* 작성자 : 김동훈 강사님
* 주제   : 얕은 복사, 깊은 복사
*/

/*
* 예제 문제.
* Person.h 에서 성별 을 추가해보시오.
* enum Gender
* {
* BOY,
* GIRL,
* }
*/

#include "Common.h"
#include "Person.h"

void Example()
{
	// 정수를 저장하는 데이터 타입(int) 변수를 2개 선언
	int numA = 10;
	// numB, numA에 저장되어있는 값을 B에 옮기고싶다.
	//numA의 값을 numB에 복사하고싶다 
	int numB = numA;

	// 정수의 주소를 저장하는 변수를 2개 선언
	int* numAptr = &numA;
	int* numBptr = numAptr;

	//numBptr에 들어간 주소와 numAptr에 들어간 주소, numA의 주소 모두 같습니까?

	cout << "numA의 주소" << &numA << endl;
	cout << "numAptr의 값" << numAptr << endl;
	cout << "numBptr 의 값" << numBptr << endl;

	// 모두같은 주소값을 가지고있음

	// 변수끼리 대입 연산자를 사용한경우
	// numA, numB 각각 다른 공간에 존재한다.

	// 주소끼리 대입연산자를 사용한 경우
	// 주소가 가리키는 값이 같다.

	// numA, numAptr, numBptr 주소의 값이 모두 동일하다.
	// 해당 주소를 하나의 변수에서 제거하면 다른 변수에서 접근을 할 수 없게된다.
}

int main()
{
	cout << "Ch 5 : 데이터 복사" << endl;
	
	// Example(); 주소값 복사 예제

	// Person human1 = {20}; // human1이라는 공간에 데이터를 복사해서 넣어줘야한다.
	Person human1(20, "모험가",0); // const char*
	Person human1Clone;
	Person human2(30, "용병",0);
	human1Clone.Clone(human1);

	human1.Show();
	human1Clone.Show();
	human2.Show();

}
