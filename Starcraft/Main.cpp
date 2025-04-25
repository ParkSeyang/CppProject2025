

// 다형성 예제
// 스타크래프트

// User가 종족을 선택, 테란, 저그, 프로토스

// 배럭 : 마린, 파이어뱃, 메딕, 고스트

// 생산 건물 : 배럭, 팩토리, 스타포트, 커맨드 센터

// 배럭.Spawn(BarrackUnit*);

#include "Unit.h"
#include "RandomUtil.h"

int main()
{
	Unit* unitptr;
	int random = RandomUtil::GetRanDomInt(100);

	if (random > 50)
	{
		cout << "성공!" << endl;
	}
	else
	{
		cout << "실패했다" << endl;
	}

	int rand = RandomUtil::GetRanDomInt(5);
}