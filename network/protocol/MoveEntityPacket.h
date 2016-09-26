#pragma once

#include "../network/protocol/Packet.h"

class MoveEntityPacket : public Packet {
public:
	virtual ~MoveEntityPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(NetworkIdentifier const&, NetEventCallback&) const;
};