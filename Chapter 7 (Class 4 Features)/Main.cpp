#include "Skill.h"
#include "Money.h"
#include "Character.h"
#include "Enemy.h"
// 도전과제
// A 개발자 Player. <-(스킬), (재화)를 사용할 수 있게금 코드를 짜보세요
// B 개발자

class Player : public Entity
{
private:
	Skill skill;
	Money money;
public:
	


};

class BattleManager
{
private:
	Player player;
	Enemy enemy;
	
	bool isEnd;

	void EnemyTurn()
	{
		enemy.Action();
	}
	void PlayerTurn()
	{

	}
public:
	void Battle()
	{
		while (true)
		{
			PlayerTurn();
			EnemyTurn();
			if (isEnd)
			{
				break;
			}
		}
	}

};


int main()
{
	BattleManager battle;

	battle.Battle();

	Skill skill;
	Money money;

	skill.Use();

	money.UseMoney();

	Character player1;
	
	Enemy enemy;
	enemy.Action();


}