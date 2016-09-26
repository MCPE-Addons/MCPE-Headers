#pragma once

#include "../network/protocol/Packet.h"

class CommandStepPacket : public Packet {
public:
	virtual ~CommandStepPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};