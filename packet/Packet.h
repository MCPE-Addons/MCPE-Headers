#pragma once

#include <raknet/BitStream.h>
#include <raknet/PacketPriority.h>

class NetEventCallback;

class Packet {
public:
	//void **vtable;				// 0
	PacketPriority priority;		// 4
	PacketReliability reliability;	// 8
};