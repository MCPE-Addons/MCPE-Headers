#pragma once

#include "../network/protocol/Packet.h"

class ExplodePacket : public Packet {
public:
	virtual ~ExplodePacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};