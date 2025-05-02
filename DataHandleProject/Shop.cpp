#include "Shop.h"

bool Shop::LoadItems(const std::string& filename)
{
	count = loader.LoadItems("data.txt", items);
	
	return count > 0; // 아이템을 1개라도 가져오면 LoadItem "True" / 그게아니라면 "False"
}

void Shop::ShowItems()
{
	for (int i = 0; i < count; i++)
	{
		std::cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "Coin" << 
			" 타입: " << items[i].dataType.type << " 수치 : " << items[i].dataType.amount << std::endl;
	}
}
