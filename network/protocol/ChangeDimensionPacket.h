#pragma once

#include "../network/protocol/Packet.h"

class ChangeDimensionPacket : public Packet {
public:
	virtual ~ChangeDimensionPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};