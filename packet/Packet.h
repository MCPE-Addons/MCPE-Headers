#pragma once

class BinaryStream;
class NetworkIdentifier;
class NetEventCallback;

// Size: 12
class Packet {
public:
	char packetfiller1[12];
	
	virtual ~Packet();
	virtual char getId() const = 0;
	virtual void write(BinaryStream&) const = 0;
	virtual void read(BinaryStream&) = 0;
	virtual void handle(const NetworkIdentifier&, NetEventCallback&) const = 0;
	virtual bool disallowBatching() const;
};