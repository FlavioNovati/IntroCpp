/*
nel main
	Stampare munizione di diverse classi create
	Stampare array
	Stampare stringhe
	Esempi con "Weapon"
*/

#pragma once
#include "WeaponData.h"

namespace Weaponry
{
	class Weapon
	{

	public:
		Weapon(const string& wName, WeaponType wType, float damage);

		WeaponData GetWeaponData();
		float ApplyDamage();
		string GetInfo();
		bool IsJammed();

	private:
		WeaponData _weaponData;

	};
}
