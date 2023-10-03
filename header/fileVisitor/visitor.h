#ifndef VISITOR_H
#define VISITOR_H

#include <fstream>
// #include "../Packet/EthernetPacket.h"
// #include "../Packet/ecpriPacket.h"

class EthernetPacket;
class ecpriPacket;

class Visitor
{
public:
	std::ofstream fileStream;
	virtual void writePacket(EthernetPacket* ethpacket, int packetNumber) = 0;
	virtual void writePacket(ecpriPacket* ecpriPacket, int packetNumber) = 0;
};
#endif