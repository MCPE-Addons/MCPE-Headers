#pragma once

#include <raknet/RakNetTypes.h>

class Packet;

class PacketSender {};

class BatchedPacketSender : public PacketSender {
public: 
	virtual ~BatchedPacketSender();
	virtual void send(const Packet &);
	virtual void send(const RakNet::RakNetGUID &, const  Packet &);
	virtual void sendBroadcast(const RakNet::RakNetGUID &, const Packet &);
	virtual void flush(const RakNet::RakNetGUID &);
};