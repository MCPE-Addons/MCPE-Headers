#pragma once

#include "Packet.h"

class EntityEventPacket : public Packet {
public: 
	virtual ~EntityEventPacket();
	virtual void getId();
	virtual void write(RakNet::BitStream *);
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *);
};