#pragma once

#include "Container.h"

class CraftingContainer : public Container {
public:
	virtual ~CraftingContainer();
	virtual void getItem(int) const;
	virtual void setItem(int, ItemInstance*);
	virtual void removeItem(int, int);
	virtual std::string getName() const;
	virtual int getContainerSize() const;
	virtual unsigned char getMaxStackSize() const;
	virtual void startOpen(Player&);
	virtual void stopOpen(Player&);
};