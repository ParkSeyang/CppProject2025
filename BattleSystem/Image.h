#pragma once
#include "Common.h"
#define IMAGEHEIGHT 10
#define IMAGEWIDTH 10

// const int HEIGHT = 10;
// const int WIDTH = 10;
// 장점 : 이름이 겹치거나 잘못 입력 받았을때 심볼릭상수이기에 .
// 단점 : 메모리를 할당받기 때문에 공간을 차지한다.

extern char SlimeIdle[IMAGEHEIGHT][IMAGEWIDTH + 1];
extern char SlimeBattle[IMAGEHEIGHT][IMAGEWIDTH + 1];
extern char SlimeMove[IMAGEHEIGHT][IMAGEWIDTH + 1];