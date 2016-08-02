#pragma once

class EnchantmentInstance {
public:
	int enchantmentType;	// 0-4
	int enchantmentLevel;	// 4-8
	
	EnchantmentInstance();
	EnchantmentInstance(int, int);
	
	void setEnchantType(int);
	void setEnchantLevel(int);
	int getEnchantType() const;
	int getEnchantLevel() const;
};