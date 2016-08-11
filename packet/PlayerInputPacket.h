#pragma once

#include "Packet.h"

class PlayerInputPacket : public Packet {
public: 
	virtual ~PlayerInputPacket();
	virtual void getId();
	virtual void write(RakNet::BitStream *);
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *);
};