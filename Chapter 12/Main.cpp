#include"SoundUtil.h"

//Winmm.lib : Window Multi Media Library

int main()
{
	cout << "배경 음악을 넣는 방법" << endl;

	// visual studio Audio file 출력 하는 방법
	// windows.h PlaySound함수 사용하기

	// SND_SYNC : 사운드 파일이 전부 실행되고 난 후에 아래 코드를 실행한다.
	// SND_ASYNC : 아래 코드와 별개로 파일이 실행된다.

	bool isPlay = PlaySound(_T("sound.wav"), NULL, SND_ASYNC); 
	// PlaySound 함수는 반환타입이 bool이다. 소리가 지금 출력되고있으면 "True" 아니면 "False"값을 반환한다.

	SoundUtil::PlayBGM(_T("sound.wav"));

	cout << "소리 출력" << endl;

	while (true)
	{

	}

}