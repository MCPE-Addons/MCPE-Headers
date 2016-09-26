#pragma once

#include "../network/protocol/Packet.h"

class PlayStatusPacket : public Packet {
public:
	virtual ~PlayStatusPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};