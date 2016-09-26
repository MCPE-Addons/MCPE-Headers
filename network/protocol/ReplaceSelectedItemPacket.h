#pragma once

#include "../network/protocol/Packet.h"

class ReplaceSelectedItemPacket : public Packet {
public:
	virtual ~ReplaceSelectedItemPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};