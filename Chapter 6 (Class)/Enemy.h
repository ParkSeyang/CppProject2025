#pragma once
#include "HP.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Enemy : public HP
{
private:
	int HP;
	int MaxHP;
	bool isDeath;
public:
	Enemy() {}
	void AttackedBy(int damage);
	void Recovery(int heal);

};

