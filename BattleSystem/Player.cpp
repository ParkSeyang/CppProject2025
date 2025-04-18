#include "Player.h"

void Player::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Player::ShowImage()
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

bool Player::IsBattle()
{
	ChangeImage(Image);

	//이동 로직
	// x의 좌표가 목표 위치보다 크면 이동해야한다.
	// x의 좌표가 목표 위치보다 작거나 같으면 정지.

	if (posX <= 10)
	{
		return true;
	}
	else
	{
		return false;
	}


}

void Player::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{

	ChangeImage(Image);

	//이동 로직
	// x의 좌표가 목표 위치보다 크면 이동해야한다.
	// x의 좌표가 목표 위치보다 작거나 같으면 정지.

	if (IsBattle()) // 전투 상태 일때는 가만히있는다.
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

void Player::Attacked(int damage)
{
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

	// HP가 0보다 작거나 같으면 몬스터가 죽었다는 사실을 알려야한다. = bool isDeath
}

void Player::Defence()
{
	DEF += 1;
}

void Player::UseItem(int heal)
{
	HP += heal;

	// 최대 체력
}
