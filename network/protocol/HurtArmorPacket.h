#pragma once

#include "../network/protocol/Packet.h"

class HurtArmorPacket : public Packet {
public:
	virtual ~HurtArmorPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};