#pragma once

#include "Packet.h"

class MobArmorEquipmentPacket : public Packet {
public: 
	virtual ~MobArmorEquipmentPacket();
	virtual void getId();
	virtual void write(RakNet::BitStream *);
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *);
};