#pragma once

#include "Packet.h"

class AnimatePacket : public Packet {
public: 
	virtual ~AnimatePacket();
	virtual void getId();
	virtual void write(RakNet::BitStream *);
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *);
};