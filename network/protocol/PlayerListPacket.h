#pragma once

#include "../network/protocol/Packet.h"

class PlayerListPacket : public Packet {
public:
	virtual ~PlayerListPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};