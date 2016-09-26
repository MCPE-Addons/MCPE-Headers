#pragma once

#include "../network/protocol/Packet.h"

class CameraPacket : public Packet {
public:
	virtual ~CameraPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};