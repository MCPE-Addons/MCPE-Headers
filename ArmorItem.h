#pragma once

#include "Item.h"
#include "ArmorSlot.h"

class ArmorItem : public Item {
public:
	class ArmorMaterial {
	public:
		ArmorMaterial(int, int, int, int, int, int);
		
		int durabilityMultiplier;	// 0-4
		int slotProtection[4];		// 4-20
		int enchantValue;			// 20-24
	};
	
	ArmorSlot slot;					// 68-72
	int defense;					// 72-76
	int modelIndex;					// 76-80
	ArmorItem::ArmorMaterial& tier;	// 80-84
	
	virtual bool isArmor() const;
	virtual void appendFormattedHovertext(const ItemInstance&, const Player&, std::string&, bool) const;
	virtual bool isValidRepairItem(const ItemInstance&, const ItemInstance&);
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual void getColor(const ItemInstance&) const;
	virtual bool dispense(BlockSource&, Container&, int, const Vec3&, signed char);
	
	ArmorItem(const std::string&, int, const ArmorItem::ArmorMaterial&, int, ArmorSlot);
	
	static const ArmorMaterial& CHAIN;
	static const ArmorMaterial& CLOTH;
	static const ArmorMaterial& DIAMOND;
	static const ArmorMaterial& GOLD;
	static const ArmorMaterial& IRON;
};
