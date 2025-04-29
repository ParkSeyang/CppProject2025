// 오늘 수업시간에 할것

// 1. 클래스를 만드는 연습

#include "Base.h"
#include "Utility.h"
#include "Runner.h"
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

	// 사운드를 출력해주는 기능을 작성

	BGMUtil::PlayTitleSound(_T("sound.wav"));
		
	Runner* runA = new Player();
	Runner* runB = new Enemy("B");
	Runner* runC = new Enemy();
	Runner* runD = new Enemy("D");
	// int runA = 0;  // 1번 주자의 현재 이동 거리.
	// int runB = 0;  // 
	// int runC = 0;
	// int runD = 0;

	bool endA = false;
	bool endB = false;
	bool endC = false;
	bool endD = false;
	
	string line = "======================================================";

	int endLine = line.length();

	while (true)
	{
		Sleep(1000);   // 1초 마다 게임을 업데이트
		system("cls"); // 화면을 지운다.

		cout << line << endl;

		runA->Run();
		runB->Run();
		runC->Run();
		runD->Run();

		cout << line << endl;

		if (runA->CheckEndLine(endLine) || runB->CheckEndLine(endLine) || runC->CheckEndLine(endLine) || runD->CheckEndLine(endLine))
		 {
		 	cout << "경기 종료!" << endl;
		 	break;
		 }

		
	}
	 if (runA->CheckEndLine(endLine))
	 {
	 	cout << "A 가 골인지점에 도착 했습니다!" << endl;
	 }
	 if (runB->CheckEndLine(endLine))
	 {
	 	cout << "B 가 골인지점에 도착 했습니다!" << endl;
	 }
	 if (runC->CheckEndLine(endLine))
	 {
	 	cout << "C 가 골인지점에 도착 했습니다!" << endl;
	 }
	 if (runD->CheckEndLine(endLine))
	 {
	 	cout << "D 가 골인지점에 도착 했습니다!" << endl;
	 }

}