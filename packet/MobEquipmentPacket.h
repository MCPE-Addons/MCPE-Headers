#pragma once

#include "Packet.h"

class MobEquipmentPacket : public Packet {
public: 
	virtual ~MobEquipmentPacket();
	virtual void getId();
	virtual void write(RakNet::BitStream *);
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *);
};