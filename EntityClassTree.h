#pragma once

enum EntityType;
class Entity;

class EntityClassTree {
public:
	static EntityType getEntityTypeIdLegacy();
	static EntityType getMobCategory();
	static bool isHangingEntity(const Entity&);
	static bool isInstanceOf(const Entity&, EntityType);
	static bool isItemEntity(const Entity&);
	static bool isMinecart(const Entity&);
	static bool isMob(const Entity&);
	static bool isMob(EntityType);
	static bool isMobLegacy(EntityType);
	static bool isOfType(EntityType, EntityType);
	static bool isPlayer(const Entity&);
	static bool isTypeInstanceOf(EntityType, EntityType);
};