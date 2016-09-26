#pragma once

#include "../network/protocol/Packet.h"

class BlockEventPacket : public Packet {
public:
	virtual ~BlockEventPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};