#pragma once

#include "NetEventCallback.h"
#include "LevelListener.h"

class LevelChunk;
class ServerPlayer;

class ServerNetworkHandler : public NetEventCallback, public LevelListener {
public: 
	virtual void onPlayerReady(Player &);
	virtual ~ServerNetworkHandler();
	virtual void onDisconnect(RakNet::RakNetGUID const &, std::string const &);
	virtual void allowIncomingPacketId(RakNet::RakNetGUID const &, int);
	virtual void handle(RakNet::RakNetGUID const &, LoginPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ClientToServerHandshakePacket const *);
	virtual void handle(RakNet::RakNetGUID const &, TextPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MoveEntityPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MovePlayerPacket *);
	virtual void handle(RakNet::RakNetGUID const &, RiderJumpPacket *);
	virtual void handle(RakNet::RakNetGUID const &, RemoveBlockPacket *);
	virtual void handle(RakNet::RakNetGUID const &, EntityEventPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MobEquipmentPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MobArmorEquipmentPacket *);
	virtual void handle(RakNet::RakNetGUID const &, InteractPacket *);
	virtual void handle(RakNet::RakNetGUID const &, UseItemPacket *);
	virtual void handle(RakNet::RakNetGUID const &, PlayerActionPacket *);
	virtual void handle(RakNet::RakNetGUID const &, DropItemPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ItemFrameDropItemPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ContainerClosePacket *);
	virtual void handle(RakNet::RakNetGUID const &, ContainerSetSlotPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ContainerSetContentPacket *);
	virtual void handle(RakNet::RakNetGUID const &, CraftingEventPacket *);
	virtual void handle(RakNet::RakNetGUID const &, AnimatePacket *);
	virtual void handle(RakNet::RakNetGUID const &, BlockEntityDataPacket *);
	virtual void handle(RakNet::RakNetGUID const &, PlayerInputPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SpawnExperienceOrbPacket *);
	virtual void handle(RakNet::RakNetGUID const &, RequestChunkRadiusPacket *);
	virtual void handle(RakNet::RakNetGUID const &, MapInfoRequestPacket *);
	virtual void onNewChunkFor(Player &, LevelChunk &);

	void _sendAdditionalLevelData(ServerPlayer *, const RakNet::RakNetGUID &);
	void _displayGameMessage(const std::string &, const std::string &);
};