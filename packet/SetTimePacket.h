#pragma once

#include "Packet.h"

class SetTimePacket : public Packet {
public:
	int time;				// 12-16
	bool dayCycleActive;	// 16-20
	
	virtual ~SetTimePacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};