#pragma once

#include <memory>

#include "Level.h"
#include "EntityType.h"

class Mob;
class BlockSource;
class Vec3;
class BlockPos;

class MobFactory {
public:
	Level& level;		// 0-4
	bool spawnEnemies;	// 8-12
	
	MobFactory(Level&);
	
	static std::unique_ptr<Mob> CreateMob(EntityType, BlockSource&, const Vec3&);
	static bool isSpawnPositionOk(EntityType, BlockSource&, const BlockPos&);
};