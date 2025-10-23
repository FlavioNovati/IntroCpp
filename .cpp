#pragma once

#include <algorithm>

using namespace std;

namespace Weaponry
{
	struct Magazine
	{
	public:
		Magazine(int maxMagSize, int startingAmount)
		{
			_magMaxSize = maxMagSize;

			_bulletCount = std::clamp(startingAmount, 0, maxMagSize);
		}

	private:
		int _magMaxSize;
		int _bulletCount;
	};
}