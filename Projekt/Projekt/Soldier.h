#pragma once
#include "Unit.h"

class Soldier :public Unit
{
public:
	char point = 'O';
	Soldier(int = 0, int = 0);
	void move();

};

