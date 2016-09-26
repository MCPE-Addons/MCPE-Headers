#pragma once

#include "../world/item/Item.h"

// Size: 84
class WeaponItem : public Item {
public:
	int attackDamage;		// 76-80
	Item::Tier& tier;		// 80-84
	
	virtual ~WeaponItem();
	virtual bool canDestroySpecial(const Block*) const;
	virtual int getAttackDamage();
	virtual bool isHandEquipped() const;
	virtual bool canDestroyInCreative() const;
	virtual void appendFormattedHovertext(const ItemInstance&, Level&, std::string&, bool) const;
	virtual bool isValidRepairItem(const ItemInstance&, const ItemInstance&);
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual bool use(ItemInstance&, Player&);
	virtual float getDestroySpeed(ItemInstance*, Block*);
	virtual void hurtEnemy(ItemInstance*, Mob*, Mob*);
};