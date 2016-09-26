#pragma once

#include "../network/protocol/Packet.h"

class BlockEntityDataPacket : public Packet {
public:
	virtual ~BlockEntityDataPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};