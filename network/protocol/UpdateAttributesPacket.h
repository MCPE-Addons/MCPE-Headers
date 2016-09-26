#pragma once

#include "../network/protocol/Packet.h"

class UpdateAttributesPacket : public Packet {
public:
	virtual ~UpdateAttributesPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};