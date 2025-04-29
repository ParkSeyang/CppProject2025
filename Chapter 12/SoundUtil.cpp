#include "SoundUtil.h"

void SoundUtil::PlayTitleSound(LPCWSTR filename) // 동기 방식
{
	PlaySound(filename, NULL, SND_SYNC);
}

void SoundUtil::PlayBGM(LPCWSTR filename)   // 비동기 방식
{ 
	PlaySound(filename, NULL, SND_ASYNC);
}
