#pragma once

#include "../network/protocol/Packet.h"

class ClientboundMapItemDataPacket : public Packet {
public:
	virtual ~ClientboundMapItemDataPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};