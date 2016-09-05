#pragma once

#include <string>

class TextureUVCoordinateSet;
enum CreativeItemCategory;
enum UseAnimation;
class Block;
class ItemInstance;
class Player;
class BlockSource;
class Container;
class Vec3;
class Level;
class Mob;
class IDataInput;
class IDataOutput;
class Entity;

class Item {
public:
	virtual ~Item();
	virtual void setIcon(const std::string&, int);
	virtual void setIcon(const TextureUVCoordinateSet&);
	virtual void setMaxStackSize(unsigned char);
	virtual void setCategory(CreativeItemCategory);
	virtual void setStackedByData(bool);
	virtual void setMaxDamage(int);
	virtual void setHandEquipped();
	virtual void setUseAnimation(UseAnimation);
	virtual void setMaxUseDuration(int);
	virtual void setRequiresWorldBuilder(bool);
	virtual bool canBeDepleted();
	virtual bool canDestroySpecial(const Block*) const;
	virtual int getLevelDataForAuxValue(int) const;
	virtual bool isStackedByData() const;
	virtual void getMaxDamage();
	virtual int getAttackDamage();
	virtual bool isHandEquipped() const;
	virtual bool isArmor() const;
	virtual bool isDye() const;
	virtual bool isGlint(const ItemInstance*) const;
	virtual bool isThrowable() const;
	virtual bool canDestroyInCreative() const;
	virtual bool isLiquidClipItem(int) const;
	virtual bool requiresInteract() const;
	virtual void appendFormattedHovertext(const ItemInstance&, const Player&, std::string&, bool) const;
	virtual bool isValidRepairItem(const ItemInstance&, const ItemInstance&);
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual void isComplex() const;
	virtual void uniqueAuxValues() const;
	virtual void getColor(const ItemInstance&) const;
	virtual bool use(ItemInstance&, Player&);
	virtual void useOn(ItemInstance*, Player*, int, int, int, signed char, float, float, float);
	virtual void dispense(BlockSource&, Container&, int, const Vec3&, signed char);
	virtual void useTimeDepleted(ItemInstance*, Level*, Player*);
	virtual void releaseUsing(ItemInstance*, Player*, int);
	virtual float getDestroySpeed(ItemInstance*, Block*);
	virtual void hurtEnemy(ItemInstance*, Mob*, Mob*);
	virtual void interactEnemy(ItemInstance*, Mob*, Player*);
	virtual void mineBlock(ItemInstance*, BlockID, int, int, int, Mob*);
	virtual void buildDescriptionName(const ItemInstance&) const;
	virtual void buildEffectDescriptionName(const ItemInstance&) const;
	virtual void readUserData(ItemInstance*, IDataInput&) const;
	virtual void writeUserData(const ItemInstance*, IDataOutput&) const;
	virtual unsigned char getMaxStackSize(const ItemInstance*);
	virtual void inventoryTick(ItemInstance&, Level&, Entity&, int, bool);
	virtual void onCraftedBy(ItemInstance&, Level&, Player&);
	virtual void getInteractText(const Player&) const;
	virtual int getAnimationFrameFor(Mob&) const;
	virtual bool isEmissive(int) const;
	virtual void getIcon(int, int, bool) const;
	virtual int getIconYOffset() const;
	virtual bool isMirroredArt() const;
};