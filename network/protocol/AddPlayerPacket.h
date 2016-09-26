#pragma once

#include "Packet.h"

class AddPlayerPacket : public Packet {
public:
	virtual ~AddPlayerPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};