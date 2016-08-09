#pragma once

#include "FillingContainer.h"

// Size : 76
class Inventory : public FillingContainer {
public: 
	virtual ~Inventory();
	virtual void getContainerSize();
	virtual void add(ItemInstance &, bool);
	virtual void canAdd(ItemInstance const &);
	virtual void dropAll(bool);
	virtual void clearSlot(int);
	virtual void load(ListTag const &);
	virtual void doDrop(ItemInstance &, bool);
	virtual void getEmptySlotsCount() const;
	virtual void setContainerSize(int);
};