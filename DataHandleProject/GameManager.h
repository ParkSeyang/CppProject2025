#pragma once

#include "Player.h"
#include "Shop.h"

class GameManager  
{
	Player* player;
	Shop* shop;

public:
	GameManager()
	{
		player = new Player();
		shop = new Shop();
	}
};

