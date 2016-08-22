#pragma once

#include "NetEventCallback.h"

class ClientNetworkHandler : public NetEventCallback {
public: 
	virtual ~ClientNetworkHandler();
	virtual void onDisconnect(RakNet::RakNetGUID const &, std::string const &);
	virtual void allowIncomingPacketId(RakNet::RakNetGUID const &, int);
	virtual void handle(RakNet::RakNetGUID const &, ServerToClientHandshakePacket const *);
	virtual void handle(RakNet::RakNetGUID const &, PlayStatusPacket *);
	virtual void handle(RakNet::RakNetGUID const &, TextPacket *);
	virtual void handle(RakNet::RakNetGUID const &, TakeItemEntityPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SetPlayerGameTypePacket *);
	virtual void handle(RakNet::RakNetGUID const &, LevelEventPacket *);
	virtual void handle(RakNet::RakNetGUID const &, EntityEventPacket *);
	virtual void handle(RakNet::RakNetGUID const &, UseItemPacket *);
	virtual void handle(RakNet::RakNetGUID const &, CraftingDataPacket *);
	virtual void handle(RakNet::RakNetGUID const &, UpdateAttributesPacket *);
	virtual void handle(RakNet::RakNetGUID const &, TelemetryEventPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ClientboundMapItemDataPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ChunkRadiusUpdatedPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ReplaceSelectedItemPacket *);
	virtual void handle(RakNet::RakNetGUID const &, AddItemPacket *);
	virtual void handle(RakNet::RakNetGUID const &, RespawnPacket *);
};