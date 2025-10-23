#pragma once
#include "WeaponData.h"

namespace Weaponry
{
	WeaponData::WeaponData()
	{
		WeaponType = WeaponType::Rifle;
		WeaponName = "default";
		MaxAmmoAmount = 0;
		AmmoAmount = 0;
		ReloadTime = 0;
		DamageValue = 0;
		IsJammed = true;
	}

	WeaponData::WeaponData(Weaponry::WeaponType wtype, const string& wName, int maxAmmo, float reloadTime, float damageValue)
	{
		WeaponType = wtype;
		WeaponName = wName;
		MaxAmmoAmount = maxAmmo;
		AmmoAmount = maxAmmo;
		ReloadTime = reloadTime;
		DamageValue = damageValue;
		IsJammed = false;
	}

	string WeaponData::ToString()
	{
		string data = "";

		data += "- Type: " + WeaponType;
		data += "- Name: " + WeaponName;
		data += "- Reload Time: " + std::to_string(ReloadTime);
		data += "- Damage Value: " + std::to_string(DamageValue);
		data += "- Is Jammed: " + IsJammed;

		return data;
	}
}
