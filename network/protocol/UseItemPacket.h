#pragma once

#include "../network/protocol/Packet.h"

class UseItemPacket : public Packet {
public:
	virtual ~UseItemPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};