#pragma once

#include "../network/protocol/Packet.h"

class MobEffectPacket : public Packet {
public:
	virtual ~MobEffectPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};