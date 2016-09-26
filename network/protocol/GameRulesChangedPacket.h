#pragma once

#include "../network/protocol/Packet.h"

class GameRulesChangedPacket : public Packet {
public:
	virtual ~GameRulesChangedPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};