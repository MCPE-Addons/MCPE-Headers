#pragma once

#include "../network/protocol/Packet.h"

class UpdateBlockPacket : public Packet {
public:
	virtual ~UpdateBlockPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};