#pragma once

class Block;
class Item;
class CompoundTag;

// Size : 20
class ItemInstance {
public:
	unsigned char count;		// 0
	unsigned short auxValue;	// 2
	char filler1[8];			// 4
	Item *item;					// 12
	Block *block;				// 16

	ItemInstance(Block const *);
	ItemInstance(Block const *, int);
	ItemInstance(Block const *, int, int);

	ItemInstance(Item const *);
	ItemInstance(Item const *, int);
	ItemInstance(Item const *, int, int);
	ItemInstance(Item const *, int, int, CompoundTag const *);

	ItemInstance(ItemInstance const&);

	ItemInstance(bool);

	ItemInstance(int, int, int);
	ItemInstance(int, int, int, CompoundTag const *);

	ItemInstance();

	int getId() const;
	void init(int, int, int);
	void hurtAndBreak(int, Mob *);

	static ItemInstance *clone(const ItemInstance *);
	static ItemInstance cloneSafe(const ItemInstance *);

	std::string getName() const;
	std::string getCustomName() const;
	std::string getHoverName() const;
};
