#pragma once

#include "EnchantmentInstance.h"

class ItemInstance;

class EnchantUtils {
public:
	static ItemInstance& applyEnchant(ItemInstance&, int, int);
	static ItemInstance& applyEnchant(ItemInstance&, const EnchantmentInstance&);
	static ItemInstance& randomlyEnchant(ItemInstance&);
};