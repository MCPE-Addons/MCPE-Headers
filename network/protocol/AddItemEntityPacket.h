#pragma once

#include "Packet.h"

class AddItemEntityPacket : public Packet {
public:
	virtual ~AddItemEntityPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};