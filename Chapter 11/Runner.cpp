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

void Enemy::SetMaxSpeed()
{

}

void Enemy::SetShape()
{

}
