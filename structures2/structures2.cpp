
// http://easy-code.ru/lesson/structures-in-cpp
//
#include "pch.h"
#include <iostream>
using namespace std;
struct PlayerInfo {
	int skill_level;
	
	string name;
};
struct Car
{
	int x_pos;
	int y_pos;
	string name;
};


int main()
{
	Car myCar;
	myCar.x_pos = 40;
	myCar.y_pos = 30;
	myCar.name = "Porche";

	
	std::cout << "Hello World!\n"; 
}
