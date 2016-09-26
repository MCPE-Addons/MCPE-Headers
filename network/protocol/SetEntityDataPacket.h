#pragma once

#include "../network/protocol/Packet.h"

class SetEntityDataPacket : public Packet {
public:
	virtual ~SetEntityDataPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};