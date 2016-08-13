#pragma once

#include "PermissionsHandler.h"

class CompoundTag;

// Size : 20
class Abilities {
public:
	bool invulnerable;					// 0
	bool flying;						// 1
	bool mayfly;						// 2
	bool instabuild;					// 3
	bool noclip;						// 4
	bool lightning;						// 5
	float walkSpeed;					// 8
	float flySpeed;						// 12
	PermissionsHandler *permsHandler;	// 16

	Abilities();

	void addSaveData(CompoundTag&);
	void loadSaveData(const CompoundTag&);

	bool isFlying();
	float getFlyingSpeed() const;
	void setFlyingSpeed(float);

	float getWalkingSpeed() const;
	void setWalkingSpeed(float);

	GlobalPermissionsLevel getGlobalPermissions() const;
	void setGlobalPermissions(GlobalPermissionsLevel) const;

	UserPermissionsLevel getUserPermissions() const;
	void setUserPermissions(UserPermissionsLevel) const;
};