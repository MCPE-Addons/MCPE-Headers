#pragma once

#include "Item.h"

// Size: 84
class WeaponItem : public Item {
public:
	int attackDamage;		// 76-80
	Item::Tier& tier;		// 80-84
};