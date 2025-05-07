
// 스토리 게임 구성 요소
// 콘솔 유틸리티 함수, Image 클래스
// ImageModel 객체 구조체
// Actor - Tell(), Selection()

/* 게임을만들때 진행되는 스토리 텔링 과정
* 등장 인물.
* 등장 배경.
* "사건"
*/

#include <iostream>
#include "Console.h"
#include "ImageModel.h"
#include "Image.h"
#include "Actor.h"

int main()
{
	ImageModel model;
	Actor actor;
	Console::CursorVisible(false);

	Image bat(model.batArt, 7);
	Image bat2(model.batArt2, 7);
	Image owl(model.owlArt, 13);
	Image bat3(model.batArt3, 7);
	Console::GoToXY(20, 20);
	actor.Tell("나레이션", "대형 박쥐가 사냥감을 찾고있다.");

	bat.move(0, 5, 10, 500);
	owl.show(0, 0);
	
	Console::GoToXY(20, 20);
	actor.Tell("나레이션", "정면에 부엉이가 나타났습니다!");
	actor.Tell("나레이션", "박쥐는 어떤 선택을 해야하나요??");
	bool b1 = actor.Selection("박쥐", "도망칩니다.", "맞서 싸웁니다.");
	
	if (b1)
	{
		std::cout << "박쥐가 도망쳐서 살았습니다! (이후 스토리진행)" << endl;
	}

	else
	{
		system("cls");
		std::cout << "부엉이에게 나대다가 부엉이의 한끼식사가 되었습니다! (Bad Ending)";
		bat3.show(0, 0);
	}


	// bat.moveReverse(10, 5, 15, 500);

	while (true)
	{
	}
}