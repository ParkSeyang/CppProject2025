#include "GameManager.h"

void GameManager::ShowTitle()
{
	//타이틀 먼저 보여주는 코드 실행
	ConsoleUtil::GotoXY(30, 0);
	cout << "제목 실행" << endl;

	// 사운드를 출력해주는 기능을 작성
	BGMUtil::PlayTitleSound(_T("sound.wav")); // 사운드 출력이 끝날 때 까지 다음 코드로 넘어가지 않는다.
}

void GameManager::ShopPhase()
{
	// 플레이어 의 강화 시스템 필요
	system("cls");
	cout << "상점에 진입 했습니다." << endl;

	int input = 0;

	cout << "행동을 선택해주세요." << endl;

	cout << "1. minSpeed 가 1만큼 증가합니다." << endl;
	cout << "2. maxSpeed 가 1만큼 증가합니다." << endl;
	cout << "3. 달리기 게임 시작 됩니다." << endl;

	cin >> input;
	
	if (input == 1)
	{
		player->Upgrade(PlayerStat::MINSPPED, 1);
	}
	else if (input == 2)
	{
		player->Upgrade(PlayerStat::MAXSPEED, 1);
	}
	else if (input == 3)
	{
		cout << "게임을 시작합니다." << endl;
	}

}

void GameManager::GamePhase()
{
	
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

	player->Initialize();
	runB->Initialize();
	runC->Initialize();
	runD->Initialize();


	while (true)
	{
		Sleep(1000);   // 1초 마다 게임을 업데이트
		system("cls"); // 화면을 지운다.

		cout << line << endl;

		player->Run();
		runB->Run();
		runC->Run();
		runD->Run();

		cout << line << endl;

		if (player->CheckEndLine(endLine) || runB->CheckEndLine(endLine) || runC->CheckEndLine(endLine) || runD->CheckEndLine(endLine))
		{
			cout << "경기 종료!" << endl;
			break;
		}


	}
	if (player->CheckEndLine(endLine))
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

	cout << "상점 페이즈를 진행하기 위해서 버튼을 입력해주세요." << endl;
	_getch();

}

void GameManager::Play()
{
	ShowTitle();
	
	while (true)
	{
		ShopPhase();
		GamePhase();
	}

}
