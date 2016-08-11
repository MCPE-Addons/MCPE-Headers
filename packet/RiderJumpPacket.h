#pragma once

#include "Packet.h"

class RiderJumpPacket : public Packet {
public: 
	virtual ~RiderJumpPacket();
	virtual void getId();
	virtual void write(RakNet::BitStream *);
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *);
};