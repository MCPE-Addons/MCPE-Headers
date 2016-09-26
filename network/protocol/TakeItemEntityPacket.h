#pragma once

#include "../network/protocol/Packet.h"

class TakeItemEntityPacket : public Packet {
public:
	virtual ~TakeItemEntityPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};