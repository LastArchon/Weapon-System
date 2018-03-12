#include "Player.h"
#include <iostream>
#include <string>
#include "Weapon.h"
using namespace std;

Player::Player()
{
}


Player::~Player()
{
}

void Player::EquipPrimary(Weapon weapon)
{
	
	std::cout << "Name your new primary weapon" << std::endl;
	string input;
	cin >> input;
	std::cout << "You have equiped the " << input <<  std::endl;

}
void Player::EquipSecondary(Weapon weapon)
{

	std::cout << "Name your new Secondary weapon" << std::endl;
	string input;
	cin >> input;
	std::cout << "You have equiped the " << input << std::endl;

}
void Player::EquipTertiary(Weapon weapon)
{

	std::cout << "Name your new Tertiary weapon" << std::endl;
	string input;
	cin >> input;
	std::cout << "You have equiped the " << input << std::endl;

}
void Player::Swing(Weapon weapon)
{
	std::cout << "Would you like to attack? (Yes/No)" << std::endl;
	string input;
	cin >> input;
	if(input == "Yes")
		std::cout << "ORA ORA ORA ORA" << std::endl;
	else
		std::cout << "you did not attack" << std::endl;

}
void Player::Shoot(Weapon weapon)
{
	std::cout << "Would you like to attack? (Yes/No)" << std::endl;
	string input;
	cin >> input;
	if (input == "Yes")
		std::cout << "Pew Pew Pew" << std::endl;
	else
		std::cout << "you did not attack" << std::endl;

}
void Player::Throw(Weapon weapon)
{
	std::cout << "Would you like to attack? (Yes/No)" << std::endl;
	string input;
	cin >> input;
	if (input == "Yes")
		std::cout << "KA BOOOOM" << std::endl;
	else
		std::cout << "you did not attack" << std::endl;

}
