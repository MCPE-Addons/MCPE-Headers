#pragma once

#include "raknet/RakNetTypes.h"
#include "Mob.h"
#include "GameType.h"
#include "Abilities.h"

class ChunkSource;
class Tick;
class GlobalPermissionsLevel;
class UserPermissionsLevel;
class EntityUniqueID;
class BlockEntity;
class TelemetryEventPacket;
class IContainerManager;
class BatchedPacketSender;
class Inventory;

class Player : public Mob {
public: 
	enum class PositionMode : char {
		NORMAL,
		RESET,
		ROTATION
	};

	char filler5[24];					// 3344
	std::string name;					// 3368
	Abilities &abilities;				// 3372
	char filler6[16];					// 3376
	RakNet::RakNetGUID guid;			// 3392
	char filler7[148];					// 3408
	Inventory *inventory;				// 3556
	char filler8[44];					// 3560
	BatchedPacketSender *packetSender;	// 3604

	virtual ~Player();
	virtual void remove();
	virtual void getAddPacket();
	virtual void normalTick();
	virtual void rideTick();
	virtual float getRidingHeight();
	virtual float getHeadHeight() const;
	virtual bool isImmobile() const;
	virtual bool isPushable() const;
	virtual bool isPushableByPiston() const;
	virtual bool isShootable();
	virtual bool isCreativeModeAllowed();
	virtual void hurt(EntityDamageSource const &, int);
	virtual void onBounceStarted(BlockPos const &, FullBlock const &);
	virtual void handleEntityEvent(EntityEvent, int);
	virtual void awardKillScore(Entity &, int);
	virtual void setEquippedSlot(ArmorSlot, int, int);
	virtual void setEquippedSlot(ArmorSlot, ItemInstance const &);
	virtual EntityType getEntityTypeId() const;
	virtual void getPortalCooldown() const;
	virtual void getPortalWaitTime() const;
	virtual void sendMotionPacketIfNeeded();
	virtual void lavaHurt();
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void die(EntityDamageSource const &);
	virtual bool isSleeping() const;
	virtual float getSpeed();
	virtual void setSpeed(float);
	virtual void travel(float, float);
	virtual void aiStep();
	virtual void getCarriedItem();
	virtual void getItemUseDuration();
	virtual void dropAllGear(int);
	virtual void drop(ItemInstance const *, bool);
	virtual void sendInventory() const;
	virtual void dropDeathLoot(int);
	virtual void dropRareDeathLoot();
	virtual void jumpFromGround();
	virtual void updateAi();
	virtual int getExperienceReward() const;
	virtual bool useNewAi();
	virtual void registerAttributes();
	virtual void prepareRegion(ChunkSource &);
	virtual void destroyRegion();
	virtual void suspendRegion();
	virtual void onPrepChangeDimension();
	virtual void onDimensionChanged();
	virtual void tickWorld(Tick const &);
	virtual void moveView();
	virtual void setName(std::string const &);
	virtual void _checkMovementStatistiscs(Vec3 const &);
	virtual void respawn();
	virtual void resetPos(bool);
	virtual bool isInTrialMode();
	virtual void hasResource(int);
	virtual void completeUsingItem();
	virtual void drop(ItemInstance const *);
	virtual void setGlobalPermissions(GlobalPermissionsLevel);
	virtual void setPermissions(UserPermissionsLevel);
	virtual void startCrafting(BlockPos const &);
	virtual void startStonecutting(BlockPos const &);
	virtual void startDestroying();
	virtual void stopDestroying();
	virtual void openContainer(int, BlockPos const &);
	virtual void openContainer(int, EntityUniqueID const &);
	virtual void openFurnace(int, BlockPos const &);
	virtual void openEnchanter(int, BlockPos const &);
	virtual void openAnvil(BlockPos const &);
	virtual void openBrewingStand(int, BlockPos const &);
	virtual void openHopper(int, BlockPos const &);
	virtual void openHopper(int, EntityUniqueID const &);
	virtual void openDispenser(int, BlockPos const &, bool);
	virtual void openPortfolio();
	virtual void openHorseInventory(int, EntityUniqueID const &);
	virtual void canOpenContainerScreen();
	virtual void displayChatMessage(std::string const &, std::string const &);
	virtual void displayClientMessage(std::string const &);
	virtual void displayLocalizableMessage(std::string const &, std::vector<std::string> const &);
	virtual void startSleepInBed(BlockPos const &);
	virtual void stopSleepInBed(bool, bool);
	virtual void canStartSleepInBed();
	virtual void getSleepTimer() const;
	virtual void openTextEdit(BlockEntity *);
	virtual bool isLocalPlayer() const;
	virtual void stopLoading();
	virtual void setPlayerGameTypePacketReceived(GameType);
	virtual void setPlayerGameType(GameType);
	virtual void _crit(Entity &);
	virtual void getTelemetry() const;
	virtual void sendTelemetryPacket(TelemetryEventPacket const &);
	virtual void setContainerData(IContainerManager &, int, int) = 0;
	virtual void slotChanged(IContainerManager &, int, ItemInstance const &, bool) = 0;
	virtual void refreshContainer(IContainerManager &, std::vector<ItemInstance> const &) = 0;
	virtual void deleteContainerManager();
	virtual void setFieldOfViewModifier(float);
	virtual void isPositionRelevant(DimensionId, BlockPos const &);
	virtual void isEntityRelevant(Entity const &);
	virtual void onMovePlayerPacketNormal(Vec3 const &, Vec2 const &);

	ItemInstance *getSelectedItem() const;
};