#pragma once

#include "Item.h"

class ArmorItem : public Item {
public:
	virtual ~ArmorItem();
	virtual bool isArmor() const;
	virtual void appendFormattedHovertext(const ItemInstance&, const Player&, std::string&, bool) const;
	virtual bool isValidRepairItem(const ItemInstance&, const ItemInstance&);
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual void getColor(const ItemInstance&) const;
	virtual void dispense(BlockSource&, Container&, int, const Vec3&, signed char);
};