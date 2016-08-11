#pragma once

#include <vector>
#include <memory>

#include "AppPlatformListener.h"
#include "BlockSourceListener.h"
#include "HitResult.h"
#include "ParticleType.h"
#include "Difficulty.h"

class Player;
class EntityDamageSource;
class LightLayer;
class LevelChunk;
class MobFactory;
class Vec3;
class LevelData;
class Dimension;

class Level : public AppPlatformListener, public BlockSourceListener {
public:
	virtual ~Level();
	virtual void onSourceCreated(BlockSource&);
	virtual void onSourceDestroyed(BlockSource&);
	virtual void onBlockChanged(BlockSource&, const BlockPos&, FullBlock, FullBlock, int);
	virtual void addEntity(std::unique_ptr<Entity>);
	virtual void addPlayer(std::unique_ptr<Player>);
	virtual void addGlobalEntity(std::unique_ptr<Entity>);
	virtual void onPlayerDeath(Player&, const EntityDamageSource&);
	virtual void tick();
	virtual void directTickEntities(BlockSource&);
	virtual void updateSleepingPlayerList();
	virtual void setDifficulty(Difficulty);
	virtual void runLightUpdates(BlockSource&, const LightLayer&, const BlockPos&, const BlockPos&);
	virtual void onNewChunkFor(Player&, LevelChunk&);
	virtual void onChunkLoaded(LevelChunk&);
	virtual void removeEntity(std::unique_ptr<Entity>&&, bool);
	virtual void removeEntity(Entity&, bool);
	virtual void onAppSuspended();

	bool isClientSide() const;

	void setDayCycleActive(bool);
	void setTime(int);
	bool isDayCycleActive();
	int getTime() const;

	MobFactory* getMobSpawner() const;
	bool addParticle(ParticleType, const Vec3&, const Vec3&, int);
	HitResult &getHitResult();
	LevelData &getLevelData();

	Player *getPlayer(const std::string &) const;
	Player *getNearestPlayer(Entity &, float);
	Player *getNearestPlayer(float, float, float, float);
	Player *getRandomPlayer();

	std::vector<std::unique_ptr<Player>> &getPlayers();

	Dimension *getDimension(DimensionId) const;
};