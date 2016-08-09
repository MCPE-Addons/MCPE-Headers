#pragma once

#include <string>

class ContainerListener;
class ItemInstance;
class Random;
class BlockSource;
class Vec3;
class CompoundTag;
class Player;

// Size : 44
class Container {
public: 
	//vtable for Container	// 0
	char filler1[40];		// 4

	virtual ~Container();
	virtual void addListener(ContainerListener *);
	virtual void removeListener(ContainerListener *);
	virtual void getItem(int) const = 0;
	virtual void addItem(ItemInstance *);
	virtual void addItemToFirstEmptySlot(ItemInstance *);
	virtual void setItem(int, ItemInstance *) = 0;
	virtual void removeItem(int, int) = 0;
	virtual void getRandomEmptySlot(Random &);
	virtual void dropContents(BlockSource &, Vec3 const &);
	virtual void getName() const = 0;
	virtual void getContainerSize() const = 0;
	virtual void getMaxStackSize() const = 0;
	virtual void startOpen(Player &) = 0;
	virtual void stopOpen(Player &) = 0;
	virtual void getSlotCopies() const;
	virtual void getSlots();
	virtual void getItemCount(int);
	virtual void canPushInItem(int, int, ItemInstance *);
	virtual void canPullOutItem(int, int, ItemInstance *);
	virtual void setContainerChanged(int);
	virtual void setContainerMoved();
	virtual void setCustomName(std::string const &);
	virtual void hasCustomName() const;
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
};