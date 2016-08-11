#pragma once

#include "Packet.h"

class RequestChunkRadiusPacket : public Packet {
public: 
	virtual ~RequestChunkRadiusPacket();
	virtual void getId();
	virtual void write(RakNet::BitStream *);
	virtual void read(RakNet::BitStream *);
	virtual void handle(RakNet::RakNetGUID const &, NetEventCallback *);
};