#pragma once

#include "Item.h"

class HorseArmorItem : public Item {
public:
	class HorseArmorTier {
	public:
		
	};
	
	char horsearmorfiller1[8];				// 68-76
	HorseArmorItem::HorseArmorTier& tier;	// 76-80
	
	virtual ~HorseArmorItem();
	virtual void appendFormattedHovertext(const ItemInstance&, const Player&, std::string&, bool) const;
	virtual void getColor(const ItemInstance&) const;
	virtual void dispense(BlockSource&, Container&, int, const Vec3&, signed char);
	virtual HorseArmorItem::HorseArmorTier& getTier();
	virtual int getArmorValue();
};