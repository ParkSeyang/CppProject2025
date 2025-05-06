#pragma once

#include <iostream>
#include "Console.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

// 이 클래스가 하는 역할
// [teller] : ~~~~~ 라고 대사를 출력하는 역할
class Actor
{
public:

	void Tell(const string& teller, const string& story)
	{
		std::cout << std::endl;
		std::cout << "[" << teller << "]";
		cout << story << endl;
	}

	bool Selection(const string& teller, const string& story1, const string& story2)
	{
		int input = 0;
		cout << "1: " << story1 << " 2: " << story2 << endl;
		cin >> input;

		if (input == 1)
		{
			Tell(teller, story1);
			return true;
		}
		else if (input == 2)
		{
			Tell(teller, story2);
			return false;
		}

		else
		{
			cout << "정확한 입력을 해주세요" << endl;
			return Selection(teller, story1, story2);
		}
	}

};

