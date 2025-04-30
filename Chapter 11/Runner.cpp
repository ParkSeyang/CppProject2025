#include "Runner.h"

void Runner::SetMaxSpeed()
{
	// maxSpeed 제어해주는 함수
	// 1. 캐릭터의 최대 속도를 설정해준다.
	run += RandomUtil::GetRanDomInt(maxSpeed);
}

void Runner::DrawMoveDistance()
{
	for (int i = 0; i < run; i++)   // 2. 이동한다.
	 {
	 	cout << " ";
	 }
}

void Runner::SetShape()
{
	cout << symbol << endl; // 3. 형태를 그려준다. "~~~P"
}

void Runner::Run()
{
	SetMaxSpeed();         // 변경될 수 있는 함수
	DrawMoveDistance();    // 변경되면 안되는 함수
	SetShape();            // 변경될 수 있는 함수
}

bool Runner::CheckEndLine(int length)
{
	if (run >= length)
	{
		isend = true;
	}
	else
	{
		isend = false;
	}
	return isend;
}

void Runner::ShowPlayerGameInfo()
{
}

void Runner::Upgrade(PlayerStat selectedStat)
{
	if (selectedStat == PlayerStat::MINSPPED)
	{
		SetMin(1);
		cout << "최소 속도가 1증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(1);
		cout << "최대 속도가 1증가 했습니다," << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "적용될 스탯이 없습니다." << endl;
	}


}

void Runner::Upgrade(PlayerStat selectedStat, int amount)
{
	if (selectedStat == PlayerStat::MINSPPED)
	{
		minSpeed += amount;
		cout << "최대 속도가" << amount << "증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		maxSpeed += amount;
		cout << "최대 속도가" << amount << "증가 했습니다." << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "적용될 스탯이 없습니다." << endl;
	}

}

void Runner::SetMin(int value)
{
	if (maxSpeed < value)
	{
		value = maxSpeed;
	}
	minSpeed += value;
}

void Runner::SetMax(int value)
{
	if (10 < value)
	{
		value = 10;
	}
	maxSpeed = value;
}

void Runner::Initialize()
{
	run = 0; // 모든 주자가 0에서 시작하도록 만들어줘야한다.

	isend = false; // 골인지점을 들어간걸 다시 리셋한다.
}

void Player::SetMaxSpeed()
{
	int applyMaxSpeed = maxSpeed + 1;  // 아이콘, 스킬 이름, 효과 : 플레이어의 최대 속도를 1 증가 시켜주는 스킬이다.
	run += RandomUtil::GetRanDomInt(applyMaxSpeed);


}

void Player::SetShape()
{
	int percent = RandomUtil::GetRanDomInt(100);
	if (percent > 50)
	{
		cout << "~" << symbol << endl;
	}
	else
	{
		cout << symbol << endl;
	}
}

void Player::ShowPlayerGameInfo()
{
	cout << "유저 정보" << endl;
	cout << "최소 속도 : " << minSpeed << "최대 속도 : " << maxSpeed << endl;
	cout << "보유 금액 : " << "  " << endl;
}

void Enemy::SetMaxSpeed()
{
	Runner::SetMaxSpeed();
}

void Enemy::SetShape()
{
	Runner::SetShape();
}
