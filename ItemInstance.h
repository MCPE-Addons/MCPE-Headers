#pragma once

class Block;
class Item;
class CompoundTag;

class ItemInstance {
public:
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

	ItemInstance(void);

	int getId() const;
};