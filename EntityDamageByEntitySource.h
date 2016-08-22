#pragma once

#include "EntityDamageSource.h"

class EntityDamageByEntitySource : public EntityDamageSource {
public:
	Entity *damager;		// 8

	EntityDamageByEntitySource(Entity &, EntityDamageCause);
	virtual ~EntityDamageByEntitySource();
	virtual bool isEntitySource() const;
	virtual Entity *getEntity() const;
	virtual Entity *getDamagingEntity() const;
	virtual std::string getDeathMessage(std::string, Entity *) const;
};
