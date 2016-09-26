#pragma once

#include "../network/protocol/Packet.h"

class InventoryActionPacket : public Packet {
public:
	virtual ~InventoryActionPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};