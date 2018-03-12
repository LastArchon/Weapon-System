#pragma once
#include "Weapon.h"
class Player
{
public:
	void EquipPrimary(Weapon weapon);
	void Swing(Weapon weapon);

	void EquipSecondary(Weapon weapon);
	void Shoot(Weapon weapon);

	void EquipTertiary(Weapon weapon);
	void Throw(Weapon weapon);
	Player();
	~Player();
};

