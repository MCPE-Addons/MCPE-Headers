#pragma once

#include "../network/protocol/Packet.h"

class LevelSoundEventPacket : public Packet {
public:
	virtual ~LevelSoundEventPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};