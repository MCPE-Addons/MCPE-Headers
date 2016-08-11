#pragma once

#include <raknet/BitStream.h>
#include <raknet/PacketPriority.h>

class NetEventCallback;

class Packet {
public:
	//void **vtable;				// 0
	PacketPriority priority;		// 4
	PacketReliability reliability;	// 8
	bool b1;						// 12

	virtual ~Packet();
	virtual int getId() const = 0;
	virtual void write(RakNet::BitStream *) const = 0;
	virtual void read(RakNet::BitStream *) = 0;
	virtual void handle(const RakNet::RakNetGUID &, NetEventCallback *) const = 0;
};