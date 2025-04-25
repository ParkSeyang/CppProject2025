#include "Unit.h"

void Marin::Move()
{
	
	if (!IsUpgrade || IsUseble)
	{
		cout << "마린이 가진 이동속도만큼 움직입니다." << endl;
	}
	// 만약에 스팀팩 업그레이드가 완료되고 스탬팩을 사용했다면
	else if (IsUpgrade && IsUseble)
	{
		cout << "마린이 스팀팩을 사용하였습니다. 이동속도가 증가한만큼 움직입니다." << endl;
	}
	
}
