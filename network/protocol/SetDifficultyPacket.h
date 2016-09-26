#pragma once

#include "../network/protocol/Packet.h"

class SetDifficultyPacket : public Packet {
public:
	virtual ~SetDifficultyPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};