#pragma once

#include "EntityDamageSource.h"
#include "EntityType.h"

class RemovedEntityDamageByType : public EntityDamageSource {
public:
	RemovedEntityDamageByType(EntityDamageCause, EntityType);
	virtual ~RemovedEntityDamageByType();
	virtual std::string getDeathMessage(std::string, Entity *) const;
};
