#pragma once

#include "../network/protocol/Packet.h"

class SetEntityMotionPacket : public Packet {
public:
	virtual ~SetEntityMotionPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};