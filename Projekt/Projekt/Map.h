#pragma once
#include "Monster.h"
#include "Soldier.h"
#include <vector>

using namespace std;

	class Map
	{
	public:
		vector <Soldier> soldiers;
		vector <Monster> monsters;
		char map[10][20];
		const int x = 20;
		const int y = 10;
	public:
		Map(const int = 20, const int = 10);

		void setsoldiers();

		void setmonsters();

		void place(int x, int y, int xpos, int ypos);
		
		void draw();
		void moveunits(int x, int y, int xpos, int ypos);
	};

