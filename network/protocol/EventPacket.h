#pragma once

#include "../network/protocol/Packet.h"

class EventPacket : public Packet {
public:
	virtual ~EventPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};