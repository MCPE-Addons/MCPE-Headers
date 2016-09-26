#pragma once

#include "../network/protocol/Packet.h"

class FullChunkDataPacket : public Packet {
public:
	virtual ~FullChunkDataPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};