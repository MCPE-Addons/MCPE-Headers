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

	ItemInstance(const Block *);
	ItemInstance(const Block *, int);
	ItemInstance(const Block *, int, int);

	ItemInstance(const Item *);
	ItemInstance(const Item *, int);
	ItemInstance(const Item *, int, int);
	ItemInstance(const Item *, int, int, const CompoundTag *);

	ItemInstance(const ItemInstance &);

	ItemInstance(bool);

	ItemInstance(int, int, int);
	ItemInstance(int, int, int, const CompoundTag *);

	ItemInstance();

	int getId() const;
	void init(int, int, int);
	void hurtAndBreak(int, Mob *);

	static ItemInstance *clone(const ItemInstance *);
	static ItemInstance cloneSafe(const ItemInstance *);

	std::string getName() const;
	std::string getCustomName() const;
	std::string getHoverName() const;

	bool isNull() const;

	bool operator=(const ItemInstance &);
	bool operator==(const ItemInstance &);
	bool operator!=(const ItemInstance &);

	short getAuxValue() const;
	void setAuxValue(short);
};