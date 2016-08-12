#pragma once

#include "Item.h"

class BowItem : public Item {
public:
	virtual ~BowItem();
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual void use(ItemInstance&, Player&);
	virtual bool releaseUsing(ItemInstance*, Player*, int);
	virtual int getAnimationFrameFor(Mob&) const;
	virtual void getIcon(int, int, bool) const;
	
	BowItem(const std::string&, int);
	
	float _getLaunchPower(int) const;
};