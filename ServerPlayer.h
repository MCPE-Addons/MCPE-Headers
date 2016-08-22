#pragma once

#include "Player.h"

class ServerPlayer : public Player {
public: 
	virtual ~ServerPlayer();
	virtual void normalTick();
	virtual void push(Vec3 const &);
	virtual void changeDimension(DimensionId);
	virtual void getControllingPlayer() const;
	virtual void knockback(Entity *, int, float, float);
	virtual void aiStep();
	virtual void hurtArmor(int);
	virtual void onEffectAdded(MobEffectInstance &);
	virtual void onEffectUpdated(MobEffectInstance const &);
	virtual void onEffectRemoved(MobEffectInstance &);
	virtual void tickWorld(Tick const &);
	virtual void hasResource(int);
	virtual void setGlobalPermissions(GlobalPermissionsLevel);
	virtual void setPermissions(UserPermissionsLevel);
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
	virtual void stopSleepInBed(bool, bool);
	virtual void setPlayerGameType(GameType);
	virtual void setContainerData(IContainerManager &, int, int);
	virtual void slotChanged(IContainerManager &, int, ItemInstance const &, bool);
	virtual void refreshContainer(IContainerManager &, std::vector<ItemInstance, std::allocator<ItemInstance> > const &);
	virtual void deleteContainerManager();
	virtual void isPositionRelevant(DimensionId, BlockPos const &);
	virtual void isEntityRelevant(Entity const &);
};