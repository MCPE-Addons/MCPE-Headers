#pragma once

#include "Packet.h"

class PlayerActionPacket : public Packet {
public: 
	virtual ~PlayerActionPacket();
	virtual void getId();
	virtual void write(RakNet::BitStream *);
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *);
};