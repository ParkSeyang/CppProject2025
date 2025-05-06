#pragma once

#include <iostream>
#include <string>
#include "Console.h"

// Image 클래스가 하는 역할
// 1차원 데이터를 2차원 배열로 변환 후 보여주는 객체
class Image
{

private:
	char art[100][100];
	int height;

public:
	Image(const char* model,int height)
	{
		this->height = height;

		const char* lineStart = model;

		for (int i = 0; i < height; i++)
		{
			const char* lineEnd = strchr(lineStart,'\n'); // i번째 줄에서 개행문자를 찾아라.

			if (lineEnd == nullptr)
			{
				lineEnd = model + strlen(model);  // 마지막 줄을 표현
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->art[i], lineStart, length);
			lineStart = lineEnd + 1;
		}
	}

	void show(int x, int y) const
	{
		for (int i = 0; i < height; i++)
		{
			Console::GoToXY(x, y + i);
			std::cout << art[i];
		}
	}

	void move(int x, int y, int moveDistance,int delay)  // ->
	{
		for (int i = 0; i < moveDistance; i++)
		{
			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(x + i, y + j);
				std::cout << art[j];
			}
			Sleep(delay);
			system("cls");
		}
		
	}

	void moveReverse(int x, int y, int moveDistance, int delay) // <-
	{
		for (int i = 0; i < moveDistance; i++)
		{
			int currentX = x - i;

			if (currentX < 0)  // 콘솔에서 x 0보다 작으면 에러가 발생한다.
			{
				currentX = 0;
			}

			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(currentX, y + j);
				std::cout << art[j];
			}
			Sleep(delay);
			system("cls");
		}

	}
};

