#pragma once

#include "../network/protocol/Packet.h"

class SpawnExperienceOrbPacket : public Packet {
public:
	virtual ~SpawnExperienceOrbPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};