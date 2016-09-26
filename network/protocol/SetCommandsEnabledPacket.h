#pragma once

#include "../network/protocol/Packet.h"

class SetCommandsEnabledPacket : public Packet {
public:
	virtual ~SetCommandsEnabledPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};