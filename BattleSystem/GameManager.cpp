#include "GameManager.h"

void GameManager::GameLoop()
{
	while (true)
	{
		Battle();
		Animation();
	}
}

void GameManager::Battle()
{
	// 전투 UI 출력
	GoToXY(50, 5);
	cout << "플레이어의 정보";
	
	GoToXY(50, 6);
	cout << "플레이어의 체력 : " << player.HP;
	GoToXY(50, 7);
	cout << "플레이어의 공격력 :" << player.ATK;
	GoToXY(50, 8);
	cout << "플레이어의 방어력 : " << player.DEF;


	// 플레이어의 조작 기능

	// 규칙설계
	// 플레이어의 턴을 사용한다 -> 몬스터가 턴을 진행한다.
	if (currentTurnState == PLAYERTURN)
	{
		PlayerTurn();
	}
	else if (currentTurnState == ENEMYTURN)
	{
		EnemyTurn();
	}
	else if (currentTurnState == GAMECLEAR)
	{
		//GameClear 조건 일때 실행
	}
	else if (currentTurnState == GAMEEND)
	{
		//GameEnd 조건일때 실행
	}
}

void GameManager::Animation()
{
	system("cls");
	player.SetBattleImage(PlayerIdle);
	currentEnemy.SetBattleImage(SlimeIdle);
	Sleep(500);
	system("cls");
	player.SetBattleImage(PlayerMove);
	currentEnemy.SetBattleImage(SlimeMove);
	Sleep(500);
	

}

void GameManager::PlayerTurn()
{
	GoToXY(0, 15);	
	cout << "현재 플레이어의 턴입니다." << endl;
	cout << "1. 공격한다. 2. 방어한다. 3. 아이템을 사용한다. " << endl;

	int input = 0;
	cin >> input;
	switch (input)
	{
	case 1: currentEnemy.Attaked(player.ATK);
		break;
	case 2: player.Defence();
		break;
	case 3: player.UseItem(10);
		break;
	default:
		break;
	}

	currentTurnState = ENEMYTURN;
}

void GameManager::EnemyTurn()
{
	cout << "현재 적군의 턴입니다." << endl;
	cout << "1. 공격한다. 2. 방어한다. 3. 아이템을 사용한다. " << endl;
	
	player.Attacked(currentEnemy.ATK);
	
	cout << "키를 읍력하면 플레이어의 턴이 진행됩니다." << endl;
	_getch();

	currentTurnState = PLAYERTURN;
}
