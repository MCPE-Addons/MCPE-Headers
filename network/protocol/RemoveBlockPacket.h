#pragma once

#include "../network/protocol/Packet.h"

class RemoveBlockPacket : public Packet {
public:
	virtual ~RemoveBlockPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};