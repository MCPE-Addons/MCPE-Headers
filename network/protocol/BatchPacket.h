#pragma once

#include "../network/protocol/Packet.h"

class BatchPacket : public Packet {
public:
	virtual ~BatchPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};