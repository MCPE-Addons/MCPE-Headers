#pragma once

#include "CommonTypes.h"

class CompoundTag;

// Size : 8
class PermissionsHandler {
public:
	GlobalPermissionsLevel global;
	UserPermissionsLevel user;

	PermissionsHandler();
	void addSaveData(CompoundTag &);
	GlobalPermissionsLevel getGlobalPermissions() const;
	UserPermissionsLevel getUserPermissions() const;
	void loadSaveData(CompoundTag const &);
	void setGlobalPermissions(GlobalPermissionsLevel);
	void setUserPermissions(UserPermissionsLevel);
};