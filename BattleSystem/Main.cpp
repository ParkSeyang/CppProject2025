/*
* Common.h 헤더파일을 만들어서 공통된 라이브러리를 추가해주세요
* Gotoxy();
* 
* player
* 
* Enemy, monster, slime
* 
* Game,Stage,Monster Manager
*/

/*
* 전투 시스템 에 필요한 요소
* Battle System
* 대상 : Player, Enemy.
* 스탯 : 체력, 공격력, 방어력
* 기능 : 사망하다.(체력이 0보다 작거나 같을 때)
* 공격을 받았다. (체력을 조작하는 기능)
* 포션을 먹는다.
*/

#include "GameManager.h"
/*
* Enemy 객체
* GameManager 객체
*/

int main()
{

	Enemy Slime(100,10,1,"슬라임",SlimeIdle,IDLE);  // 몬스터 객체를 생성
	Player player(100, 10, 1, "모험가", PlayerIdle, IDLE);
	GameManager Game(Slime,player);

	// int slimeX = 30;
	// int slimeY = 5;
	/*
	* 적군이 어떤조건일때 SlimeIdle 이어야 하는가?
	* 적군이 어떤 조건일 때 Move 인가?
	* 적군이 어떤 조건일 때 Battle 인가?
	*/

	
	// _getch(); // 키보드의 아무 버튼을 누르면 다음으로 진행됩니다.


	Game.GameLoop();

	// while (true)
	// {
	// 	Game.player.SetBattleImage(PlayerIdle);
	// 	Game.currentEnemy.SetBattleImage(SlimeIdle);
	// 	Sleep(500);
	// 	system("cls");
	// 	Game.player.SetBattleImage(PlayerMove);
	// 	Game.currentEnemy.SetBattleImage(SlimeMove);
	// 	Sleep(500);
	// 	system("cls");
	// }
}