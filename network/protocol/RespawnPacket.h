#pragma once

#include "../network/protocol/Packet.h"

class RespawnPacket : public Packet {
public:
	virtual ~RespawnPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};