#pragma once

#include "../network/protocol/Packet.h"

// Size: 16
class SetPlayerGameTypePacket : public Packet {
public:
	int gametype;	// 12-16
	
	virtual ~SetPlayerGameTypePacket();
	virtual char getId() const;
	virtual void write(BinaryStream&) const;
	virtual void read(BinaryStream&);
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const;
};