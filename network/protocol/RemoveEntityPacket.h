#pragma once

#include "../network/protocol/Packet.h"

class RemoveEntityPacket : public Packet {
public:
	virtual ~RemoveEntityPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};