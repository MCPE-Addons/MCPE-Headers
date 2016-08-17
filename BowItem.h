#pragma once

#include "Item.h"

class BowItem : public Item {
public:
	TextureUVCoordinateSet icons[3]; // 68-152
	
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual bool use(ItemInstance&, Player&);
	virtual void releaseUsing(ItemInstance*, Player*, int);
	virtual int getAnimationFrameFor(Mob&) const;
	virtual const TextureUVCoordinateSet& getIcon(int, int, bool) const;
	
	BowItem(const std::string&, int);
	
	float _getLaunchPower(int) const;
};
