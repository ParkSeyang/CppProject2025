#include "RandomUtil.h"

int RandomUtil::GetRanDomInt(int range)
{
	static std::random_device device;
	static std::mt19937 gen(device());
	std::uniform_int_distribution<> dist(1, range);
	return dist(gen);
}
