#pragma once

#include <string>
#include <vector>

#include "CommonTypes.h"
#include "DimensionId.h"
#include "Material.h"
#include "EntityType.h"

class AABB;
class Vec3;
class Vec2;
class CompoundTag;
class BlockPos;
class EntityPos;
class EntityDamageSource;
class EntityEvent;
class ArmorSlot;
class ChangeDimensionPacket;
class EntityLocation;
class EntityLink;
class ItemInstance;
class BlockSource;

// Size : 420
class Entity {
public:
	//vtable for Entity		// 0
	char filler1[416];		// 4

	virtual ~Entity();
	virtual void _postInit();
	virtual void reset();
	virtual void getOwnerEntityType();
	virtual void remove();
	virtual void setPos(Vec3 const &);
	virtual void getPos() const;
	virtual void getPosOld() const;
	virtual void getPosExtrapolated(float) const;
	virtual void getVelocity() const;
	virtual void move(Vec3 const &);
	virtual void checkBlockCollisions(AABB const &);
	virtual void checkBlockCollisions();
	virtual void moveRelative(float, float, float);
	virtual void lerpTo(Vec3 const &, Vec2 const &, int);
	virtual void lerpMotion(Vec3 const &);
	virtual void turn(Vec2 const &, bool);
	virtual void interpolateTurn(Vec2 const &);
	virtual void getAddPacket();
	virtual void normalTick();
	virtual void baseTick();
	virtual void rideTick();
	virtual void positionRider(Entity &) const;
	virtual float getRidingHeight();
	virtual float getRideHeight() const;
	virtual void startRiding(Entity &);
	virtual void addRider(Entity &);
	virtual void removeRider(Entity &);
	virtual void intersects(Vec3 const &, Vec3 const &);
	virtual bool isFree(Vec3 const &, float);
	virtual bool isFree(Vec3 const &);
	virtual bool isInWall() const;
	virtual bool isInvisible();
	virtual bool canShowNameTag();
	virtual void setNameTagVisible(bool);
	virtual void getNameTag() const;
	virtual void setNameTag(std::string const &);
	virtual bool isInWater() const;
	virtual bool isInWaterOrRain();
	virtual bool isInLava();
	virtual bool isBaby() const;
	virtual bool isUnderLiquid(MaterialType) const;
	virtual void makeStuckInWeb();
	virtual float getHeadHeight() const;
	virtual float getShadowHeightOffs();
	virtual float getShadowRadius() const;
	virtual bool isSkyLit(float);
	virtual void getBrightness(float);
	virtual void interactPreventDefault();
	virtual void interactWithPlayer(Player &);
	virtual bool canInteractWith(Player &);
	virtual void getInteractText(Player &);
	virtual void playerTouch(Player &);
	virtual void push(Entity &, bool);
	virtual void push(Vec3 const &);
	virtual bool isImmobile() const;
	virtual bool isSilent();
	virtual bool isPickable();
	virtual bool isPushable() const;
	virtual bool isPushableByPiston() const;
	virtual bool isShootable();
	virtual bool isSneaking() const;
	virtual bool isAlive() const;
	virtual bool isOnFire() const;
	virtual bool isCreativeModeAllowed();
	virtual bool isSurfaceMob() const;
	virtual void hurt(EntityDamageSource const &, int);
	virtual void animateHurt();
	virtual void doFireHurt(int);
	virtual void onLightningHit();
	virtual void onBounceStarted(BlockPos const &, FullBlock const &);
	virtual void handleEntityEvent(EntityEvent, int);
	virtual void getPickRadius();
	virtual void spawnAtLocation(int, int);
	virtual void spawnAtLocation(int, int, float);
	virtual void spawnAtLocation(FullBlock, int);
	virtual void spawnAtLocation(FullBlock, int, float);
	virtual void spawnAtLocation(ItemInstance const &, float);
	virtual void awardKillScore(Entity &, int);
	virtual void setEquippedSlot(ArmorSlot, int, int);
	virtual void setEquippedSlot(ArmorSlot, ItemInstance const &);
	virtual void save(CompoundTag &);
	virtual void saveWithoutId(CompoundTag &);
	virtual void load(CompoundTag const &);
	virtual void loadLinks(CompoundTag const &, std::vector<EntityLink> &);
	virtual EntityType getEntityTypeId() = 0;
	virtual void queryEntityRenderer();
	virtual void getSourceUniqueID();
	virtual void setOnFire(int);
	virtual void getHandleWaterAABB() const;
	virtual void handleInsidePortal(BlockPos const &);
	virtual void getPortalCooldown() const;
	virtual void getPortalWaitTime() const;
	virtual DimensionId getDimensionId() const;
	virtual void changeDimension(DimensionId);
	virtual void changeDimension(ChangeDimensionPacket &);
	virtual void getControllingPlayer() const;
	virtual void checkFallDamage(float, bool);
	virtual void causeFallDamage(float);
	virtual void playSound(std::string const &, float, float, EntityLocation);
	virtual void onSynchedDataUpdate(int);
	virtual bool canAddRider(Entity &) const;
	virtual bool canBeLeashed();
	virtual bool isLeashableType();
	virtual void tickLeash();
	virtual void getEyeHeight() const;
	virtual void sendMotionPacketIfNeeded();
	virtual void stopRiding(bool, bool);
	virtual void buildDebugInfo(std::string &) const;
	virtual void openContainerComponent(Player &);
	virtual void hasOutputSignal(signed char) const;
	virtual void getOutputSignal() const;
	virtual void getDebugText(std::vector<std::string> &);
	virtual void setSize(float, float);
	virtual void setPos(EntityPos const &);
	virtual void outOfWorld();
	virtual void markHurt();
	virtual void burn(int, bool);
	virtual void lavaHurt();
	virtual void readAdditionalSaveData(CompoundTag const &) = 0;
	virtual void addAdditionalSaveData(CompoundTag &) = 0;
	virtual void _playStepSound(BlockPos const &, int);
	virtual void checkInsideBlocks(float);
	virtual void pushOutOfBlocks(Vec3 const &);
	virtual void updateWaterState();
	virtual void doWaterSplashEffect();
	virtual void updateInsideBlock();
	virtual void onBlockCollision(int);

	BlockPos& _getBlockOnPos();
	BlockSource *getRegion() const;
};