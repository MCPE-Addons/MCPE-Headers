#pragma once

#include <string>

#include "Packet.h"

// Size: 16
class DisconnectPacket : public Packet {
public:
	std::string message;	// 12-16
	
	virtual ~DisconnectPacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};