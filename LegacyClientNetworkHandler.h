#pragma once

#include "ClientNetworkHandler.h"
#include "LevelListener.h"

class LegacyClientNetworkHandler : public ClientNetworkHandler, public LevelListener {
public: 
	virtual void onPlayerReady(Player &);
	virtual ~LegacyClientNetworkHandler();
	virtual void onConnect(RakNet::RakNetGUID const &);
	virtual void onUnableToConnect();
	virtual void handle(RakNet::RakNetGUID const &, DisconnectPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SetTimePacket *);
	virtual void handle(RakNet::RakNetGUID const &, StartGamePacket *);
	virtual void handle(RakNet::RakNetGUID const &, AddItemEntityPacket *);
	virtual void handle(RakNet::RakNetGUID const &, AddPaintingPacket *);
	virtual void handle(RakNet::RakNetGUID const &, AddEntityPacket *);
	virtual void handle(RakNet::RakNetGUID const &, AddPlayerPacket *);
	virtual void handle(RakNet::RakNetGUID const &, RemoveEntityPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MoveEntityPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MovePlayerPacket *);
	virtual void handle(RakNet::RakNetGUID const &, UpdateBlockPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ExplodePacket *);
	virtual void handle(RakNet::RakNetGUID const &, BlockEventPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MobEffectPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MobEquipmentPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MobArmorEquipmentPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SetEntityDataPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SetEntityMotionPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SetHealthPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SetEntityLinkPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SetSpawnPositionPacket *);
	virtual void handle(RakNet::RakNetGUID const &, HurtArmorPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ContainerOpenPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ContainerClosePacket *);
	virtual void handle(RakNet::RakNetGUID const &, ContainerSetDataPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ContainerSetSlotPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ContainerSetContentPacket *);
	virtual void handle(RakNet::RakNetGUID const &, AdventureSettingsPacket *);
	virtual void handle(RakNet::RakNetGUID const &, AnimatePacket *);
	virtual void handle(RakNet::RakNetGUID const &, BlockEntityDataPacket *);
	virtual void handle(RakNet::RakNetGUID const &, FullChunkDataPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SetDifficultyPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ChangeDimensionPacket *);
	virtual void handle(RakNet::RakNetGUID const &, PlayerListPacket *);
	virtual void onBlockChanged(BlockSource &, BlockPos const &, FullBlock, FullBlock, int);
};