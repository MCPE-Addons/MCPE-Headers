#pragma once

#include "Packet.h"

class AddEntityPacket : public Packet {
public:
	virtual ~AddEntityPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};