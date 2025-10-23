#pragma once
#include "Weapon.h"
#include <iostream>

namespace Weaponry
{
	Weapon::Weapon(const string& wName, WeaponType wType, float damage)
	{
		_weaponData = WeaponData(wType, wName, 30, 5, damage);
	}

	float Weapon::ApplyDamage()
	{
		std::cout << "Damage Applied: " << _weaponData.DamageValue << endl;
		return _weaponData.DamageValue;
	}

#pragma region Getters

	string Weapon::GetInfo() { return _weaponData.ToString(); }

	WeaponData Weapon::GetWeaponData() { return _weaponData; }

	bool Weapon::IsJammed() { return _weaponData.IsJammed; }

#pragma endregion

}
