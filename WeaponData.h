#pragma once
#include <string>
using namespace std;

#include "WeaponType.h"

namespace Weaponry
{
	struct WeaponData
	{
		WeaponType WeaponType;
		string WeaponName;
		int MaxAmmoAmount;
		int AmmoAmount;
		float ReloadTime;
		bool IsJammed;
		float DamageValue;

		WeaponData();

		WeaponData(
			Weaponry::WeaponType wtype, 
			const string &wName, 
			int maxAmmo, 
			float reloadTime,
			float damageValue);
		
	public:
		string ToString();
	};
}