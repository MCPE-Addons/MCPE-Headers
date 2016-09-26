#pragma once

#include "../network/protocol/Packet.h"

class MapInfoRequestPacket : public Packet {
public:
	virtual ~MapInfoRequestPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};