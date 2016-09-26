#pragma once

#include "Packet.h"

class ServerToClientHandshakePacket : public Packet {
public:
	virtual ~ServerToClientHandshakePacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};