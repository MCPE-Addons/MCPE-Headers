#pragma once

#include "Packet.h"

class AddPaintingPacket : public Packet {
public:
	virtual ~AddPaintingPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};