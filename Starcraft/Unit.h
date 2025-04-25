#pragma once

#include "Common.h"

class Unit
{
public:
	virtual void Move() = 0;  // 순수 가상 함수
};

class BarrackUnit : public Unit
{
public:
	virtual void Move() = 0;

};

class Marin : public BarrackUnit
{
private:
	bool IsUpgrade;
	bool IsUseble;
public:
	void Move() override;

};

class Firebat : public BarrackUnit
{

};

class Medic : public BarrackUnit
{

};