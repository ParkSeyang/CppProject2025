#pragma once
#include <windows.h>
#include <random>
// static : 클래스 객체 없이 범위로 함수를 호출 할 수있다.

class RandomUtil
{
public:
	static int GetRanDomInt(int range);


};

class ConsoleUtil
{
public:
	static void GotoXY(int x, int y);
};

