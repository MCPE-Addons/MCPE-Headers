#pragma once

#include <string>
#include <vector>

#include "ContainerType.h"

class ContainerListener;
class ItemInstance;
class Random;
class BlockSource;
class Vec3;
class Player;
class CompoundTag;

// Size : 44
class Container {
public: 
	//vtable for Container			// 0
	ContainerType type;				// 4-8
	char containerfiller1[44 - 8];	// 8-44

	virtual ~Container();
	virtual void addListener(ContainerListener*);
	virtual void removeListener(ContainerListener*);
	virtual void getItem(int) const = 0;
	virtual void addItem(ItemInstance*);
	virtual void addItemToFirstEmptySlot(ItemInstance*);
	virtual void setItem(int, ItemInstance*) = 0;
	virtual void removeItem(int, int) = 0;
	virtual int getRandomEmptySlot(Random&);
	virtual void dropContents(BlockSource&, const Vec3&);
	virtual std::string getName() const = 0;
	virtual int getContainerSize() const = 0;
	virtual unsigned char getMaxStackSize() const = 0;
	virtual void startOpen(Player&) = 0;
	virtual void stopOpen(Player&) = 0;
	virtual std::vector<ItemInstance> getSlotCopies() const;
	virtual std::vector<ItemInstance*> getSlots();
	virtual void getItemCount(int);
	virtual bool canPushInItem(int, int, ItemInstance*);
	virtual bool canPullOutItem(int, int, ItemInstance*);
	virtual void setContainerChanged(int);
	virtual void setContainerMoved();
	virtual void setCustomName(const std::string&);
	virtual bool hasCustomName() const;
	virtual void readAdditionalSaveData(const CompoundTag&);
	virtual void addAdditionalSaveData(CompoundTag&);

	ContainerType getContainerType();
};