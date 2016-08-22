#pragma once

class EntityDamageSource;
class Entity;
class Mob;
class ItemInstance;

class Enchant {
public: 
	enum Type {
		Protection, FireProtection, FeatherFalling, BlastProtection, ProjectileProtection, // Protection
		Thorns, AquaAffinity, DepthStrider, FrostWalker, // Armor
		Sharpness, Smite, BaneOfArthropods, Knockback, FireAspect, Looting, // MeleeWeapon
		Efficiency, SilkTouch, Unbreaking, Fortune, // Digger
		Power, Punch, Flame, Infinity, // Bow
		LuckOfTheSea, Lure // Fishing
	};

	virtual ~Enchant();
	virtual void getMinCost(int) const;
	virtual void getMaxCost(int) const;
	virtual void getMinLevel() const;
	virtual void getMaxLevel() const;
	virtual void getDamageProtection(int, EntityDamageSource const &) const;
	virtual void getDamageBonus(int, Entity const &) const;
	virtual void doPostAttack(Mob &, Mob &, int) const;
	virtual void doPostHurt(ItemInstance &, Mob &, Mob &, int) const;
	virtual void isMeleeDamageEnchant() const;
	virtual void isProtectionEnchant() const;
};