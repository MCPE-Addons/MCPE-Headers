#pragma once

#include "Packet.h"

class ContainerClosePacket : public Packet {
public: 
	virtual ~ContainerClosePacket();
	virtual void getId();
	virtual void write(RakNet::BitStream *);
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *);
};