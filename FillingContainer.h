#pragma once

#include "Container.h"

class ListTag;

class FillingContainer : public Container {
public: 
	char filler2[12];	// 44
	Player *player;		// 56

	virtual ~FillingContainer();
	virtual void getItem(int) const;
	virtual void setItem(int, ItemInstance *);
	virtual void removeItem(int, int);
	virtual void getName() const;
	virtual void getContainerSize() const;
	virtual void getMaxStackSize() const;
	virtual void startOpen(Player &);
	virtual void stopOpen(Player &);
	virtual void add(ItemInstance &, bool);
	virtual bool canAdd(ItemInstance const &);
	virtual void dropAll(bool);
	virtual void clearSlot(int);
	virtual void load(ListTag const &);
	virtual void doDrop(ItemInstance &, bool);
	virtual void getEmptySlotsCount();
};