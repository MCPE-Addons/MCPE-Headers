#pragma once

#include "../network/protocol/Packet.h"

class AvailableCommandsPacket : public Packet {
public:
	virtual ~AvailableCommandsPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};