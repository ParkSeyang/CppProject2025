#include "Runner.h"

void Runner::Run()
{
	// maxSpeed 제어해주는 함수
	run += RandomUtil::GetRanDomInt(maxSpeed);
	for (int i = 0; i < run; i++)
	{
		cout << " ";
	}
	cout << symbol << endl;
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

void Player::Run()
{
	Runner::Run();
	cout << "~~" << endl;
	cout << symbol << endl;
}
