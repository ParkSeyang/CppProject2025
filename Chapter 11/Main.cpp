// 오늘 수업시간에 할것

// 1. 클래스를 만드는 연습

#include "Base.h"
#include "Utility.h"
#include "Runner.h"
#include "GameManager.h"
void ClassDefaultInfo()
{
	Base* base = new Base();

	delete base;

	Base* derived = new Derived();

	derived->Do();

	delete derived;

}
/* 달리기 게임 생성
* ------------------------
* 1
* 2
* 3
* 4
* ------------------------
*/
// 기초적인 달리기 게임 생성과정
// 1. 1,2,3,4번 플레이어가 달려서 골인지점까지 랜덤확률로 칸을 이동시킨다.
// 2. 골인지점에 도착하면 반복문이 종료가되고 골인에 도착한사람의 이름이 출력된다.

int main()
{
	ClassDefaultInfo();
	system("cls");
	cout << "달리기 게임 코드" << endl;  // Game Title

	GameManager game;

	game.Play();


}