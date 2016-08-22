#pragma once

#include "Attribute.h"

class BaseAttributeMap;
class AttributeInstance;
class CompoundTag;
class ListTag;
class AttributeModifier;
class TemporalAttributeBuff;

class SharedAttributes {
public:
	static const Attribute HEALTH;
	static const Attribute ABSORPTION;
	static const Attribute ATTACK_DAMAGE;
	static const Attribute FOLLOW_RANGE;
	static const Attribute KNOCKBACK_RESISTANCE;
	static const Attribute MOVEMENT_SPEED;

	static void _saveAttributeModifier(AttributeModifier const&);
	static void loadAttributeModifier(CompoundTag const*);

	static void _saveAttributeBuff(TemporalAttributeBuff const&);
	static void loadAttributeBuff(CompoundTag const*);

	static void _saveAttribute(AttributeInstance const&);
	static void _loadAttribute(AttributeInstance &, CompoundTag const*);

	static void saveAttributes(BaseAttributeMap *);
	static void loadAttributes(BaseAttributeMap *, ListTag const*);
};
