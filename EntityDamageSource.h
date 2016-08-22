#pragma once

#include <string>

#include "EntityDamageCause.h"

class Entity;

class EntityDamageSource {
public:
	//vtable for EntityDamageSource	// 0
	EntityDamageCause cause;		// 4

	EntityDamageSource(EntityDamageCause);
	virtual ~EntityDamageSource();
	virtual bool isEntitySource() const;
	virtual Entity *getEntity() const;
	virtual bool isChildEntitySource() const;
	virtual Entity *getDamagingEntity() const;
	virtual bool isBlockSource() const;
	virtual std::string getDeathMessage(std::string, Entity *) const;
	EntityDamageCause getCause() const;
};
