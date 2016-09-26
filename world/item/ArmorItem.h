#pragma once

#include "../world/item/ArmorSlot.h"
#include "../world/item/Item.h"

// Size: 92
class ArmorItem : public Item {
public:
	class ArmorMaterial {
	public:
		int durabilityMultiplier;
		int slotProtection[4];
		int enchantValue;
	};
	
	ArmorSlot slot;								// 76-80
	char armoritemfiller1[88 - 80];				// 80-88
	const ArmorItem::ArmorMaterial& material;	// 88-92
	
	virtual ~ArmorItem();
	virtual bool isArmor() const;
	virtual void appendFormattedHovertext(const ItemInstance&, Level&, std::string&, bool) const;
	virtual bool isValidRepairItem(const ItemInstance&, const ItemInstance&);
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual void getColor(const ItemInstance&) const;
	virtual void dispense(BlockSource&, Container&, int, const Vec3&, signed char);
	virtual void hurtEnemy(ItemInstance*, Mob*, Mob*);
	virtual void mineBlock(ItemInstance*, BlockID, int, int, int, Mob*);
	
	ArmorItem(const std::string&, int, const ArmorItem::ArmorMaterial&, int, ArmorSlot);
	
	static ArmorSlot getSlotForItem(const ItemInstance&);
};