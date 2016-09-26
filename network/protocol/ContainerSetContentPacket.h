#pragma once

#include "../network/protocol/Packet.h"

class ContainerSetContentPacket : public Packet {
public:
	virtual ~ContainerSetContentPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};