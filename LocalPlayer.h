#pragma once

#include "Player.h"

class LocalPlayer : public Player {
public: 
	virtual ~LocalPlayer();
	virtual void setPos(Vec3 const &);
	virtual void move(Vec3 const &);
	virtual void normalTick();
	virtual void rideTick();
	virtual void startRiding(Entity &);
	virtual void hurt(EntityDamageSource const &, int);
	virtual void handleInsidePortal(BlockPos const &);
	virtual void changeDimension(DimensionId);
	virtual void changeDimension(ChangeDimensionPacket &);
	virtual void getControllingPlayer();
	virtual void checkFallDamage(float, bool);
	virtual void stopRiding(bool, bool);
	virtual void outOfWorld();
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void die(EntityDamageSource const &);
	virtual void setSneaking(bool);
	virtual void setSprinting(bool);
	virtual void actuallyHurt(int, EntityDamageSource const *);
	virtual void travel(float, float);
	virtual void applyFinalFriction(float);
	virtual void aiStep();
	virtual void swing();
	virtual void setArmor(ArmorSlot, ItemInstance const *);
	virtual void drop(ItemInstance const *, bool);
	virtual void updateAi();
	virtual void destroyRegion();
	virtual void onPrepChangeDimension();
	virtual void onDimensionChanged();
	virtual void tickWorld(Tick const &);
	virtual void _checkMovementStatistiscs(Vec3 const &);
	virtual void respawn();
	virtual void resetPos(bool);
	virtual bool isInTrialMode();
	virtual void startCrafting(BlockPos const &);
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
	virtual void displayLocalizableMessage(std::string const &, std::vector<std::string, std::allocator<std::string> > const &);
	virtual void startSleepInBed(BlockPos const &);
	virtual void stopSleepInBed(bool, bool);
	virtual void canStartSleepInBed();
	virtual void openTextEdit(BlockEntity *);
	virtual void isLocalPlayer();
	virtual void stopLoading();
	virtual void _crit(Entity &);
	virtual void getTelemetry();
	virtual void setContainerData(IContainerManager &, int, int);
	virtual void slotChanged(IContainerManager &, int, ItemInstance const &, bool);
	virtual void refreshContainer(IContainerManager &, std::vector<ItemInstance, std::allocator<ItemInstance> > const &);
	virtual void deleteContainerManager();
};