#include "Enemy.h"

void Enemy::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Enemy::ShowImage()
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			// 특정 좌표로 이동하세요
			GoToXY(posX + x, posY + y);
			cout << Image[y][x];
		}
		cout << endl;
	}
}

bool Enemy::IsBattle()
{
	if (posX <= 10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Enemy::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	ChangeImage(Image);

	// 이동 로직

	// x의 좌표가 목표 위치보다 크면 이동해야한다.
	// x의 좌표가 목표 위치보다 작거나 같으면 정지

	if (IsBattle()) // 
	{
		posX = 10;
	}
	else
	{
		// 적군 마다 특별한 행동을 하는 함수 호출
		posX--;
	}
	ShowImage();
}

void Enemy::Attacked(int damage)
{
	// 데미지 감소 규칙 
	damage = damage - DEF;
	if (damage <= 0)
	{
		damage = 1;
	}

	HP -= damage;

	if (HP <= 0)
	{
		isDeath = true;
	}

	// HP가 0보다 작거나 같으면 몬스터 죽었다는 사실을 알려야한다. - Bool isDeath
}
