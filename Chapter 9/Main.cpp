/* 그전 챕터에서 배운것들 복기
*  캡슐화
*  상속 - 공통된 코드를 하나로 묶을 수 있다.
*  상속을 언제 해야 하는가? "IS-A", "Has-A"
* 
*  이번 챕터에서 할것
* 상속을 사용하면 어떤 장점이있는가?
* 
*/

/* 개인과제 상속을 활용해 보아라
* 1.클래스 먼저 생성해보세요 
* 2.클래스를 상속하는 실제 데이터를 만들어보세요
* std::cout << " ??? 시너지가 n개 이상 모이면 코드가 실행됩니다.
* 게임 시너지  -
* 시너지(공통) -
*/

#include"Monster.h"
#include "MonsterHandler.h"
#include "builder.h"
int main()
{
	MonsterHandler monsterHandler;
	Monster slime2(1, 5);
	
	Slime slime(1, 5);
	Orc orc(2, 10);

	monsterHandler.BattleWithPlayer(slime2);
	monsterHandler.BattleWithPlayer(slime);
	monsterHandler.BattleWithPlayer(orc);

	// 각 타워 인스턴스 생성 (비용, 공격력, 사거리, 건설시간, 적을 때릴수 있는 수)
	RifeTower rifetower(50, 8, 5, 25, 1);
	LaserTower lasertower(150, 10, 8, 30, 5);
	CannonTower cannontower(300, 25, 10, 50, 8);
	FrostTower frosttower(275, 12, 3, 35, 5);

	cout << "==== 타워 생성 테스트 ====" << endl << endl;
	
	rifetower.build(50, 25);
	rifetower.EnemyAttack(8, 5, 1);
	cout << endl;

	// LaserTower 테스트
	lasertower.build(150, 30);
	lasertower.EnemyAttack(10, 8, 5);
	cout << endl;

	// CannonTower 테스트
	cannontower.build(300, 50);
	cannontower.EnemyAttack(25,10, 8);
	cout << endl;

	// FrostTower 테스트
	frosttower.build(275, 35);
	frosttower.EnemyAttack(12, 3, 5);
	cout << endl;

	
	/* 내일 배울것
	* 데이터 베이스
	* 테이터를 직접만든다.
	* 데이터를 저장한다, 배열에 저장을한다.
	* 데이터를 검색하고 사용한다.
	*/


}