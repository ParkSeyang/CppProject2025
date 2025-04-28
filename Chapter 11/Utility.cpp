#include "Utility.h"

// int rand = GetRandomInt(5);
int RandomUtil::GetRanDomInt(int range)  // 1 ~ range 사이의 값 반환
{
	static std::random_device device;
	static std::mt19937 gen(device());
	std::uniform_int_distribution<> dist(1, range);
	return dist(gen);
}

// ConsoleUtil::
void ConsoleUtil::GotoXY(int x, int y)
{
	static COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
