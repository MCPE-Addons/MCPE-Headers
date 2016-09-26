#pragma once

#include "Packet.h"

class AddItemPacket : public Packet {
public:
	virtual ~AddItemPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};