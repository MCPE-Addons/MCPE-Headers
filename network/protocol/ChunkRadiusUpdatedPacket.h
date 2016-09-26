#pragma once

#include "../network/protocol/Packet.h"

class ChunkRadiusUpdatedPacket : public Packet {
public:
	virtual ~ChunkRadiusUpdatedPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};