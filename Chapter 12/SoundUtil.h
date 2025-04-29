#pragma once

#include <iostream>
#include <windows.h>
#include <tchar.h>
using namespace std;

class SoundUtil
{
private:

public:
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};
