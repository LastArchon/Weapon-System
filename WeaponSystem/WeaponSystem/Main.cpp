#include <iostream>
#include "Player.h"
#include "Weapon.h"
#include <process.h>

using namespace std;

int main(int argc, char* argcs[]) {

	Weapon w1, w2, w3;

	Player p;

	std::cout << "Select your weapon "  << std::endl;
	std::cout << "Press 1 for sword, press 2 for bow, press 3 for bomb " << std::endl;

	int input;
	cin >> input;
	switch (input)
	{
		case(1):
			p.EquipPrimary(w1);
			p.Swing(w1);
			break;
		case(2):
			p.EquipSecondary(w2);
			p.Shoot(w2);
			break;
		case(3):
			p.EquipTertiary(w3);
			p.Throw(w3);
			break;
		
		default:
			std::cout << "That was not a valid entry" << std::endl;
		break;
		
		return 0;
	}
	system("pause");
}