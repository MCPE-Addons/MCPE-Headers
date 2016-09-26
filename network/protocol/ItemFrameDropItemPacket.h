#pragma once

#include "../network/protocol/Packet.h"

class ItemFrameDropItemPacket : public Packet {
public:
	virtual ~ItemFrameDropItemPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};