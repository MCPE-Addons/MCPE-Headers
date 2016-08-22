#pragma once

#include "EnchantmentInstance.h"

class ItemInstance;

class EnchantUtils {
public:
	static bool applyEnchant(ItemInstance&, int, int);
	static bool applyEnchant(ItemInstance&, const EnchantmentInstance&);
	static bool randomlyEnchant(ItemInstance&);
};