#pragma once
#include <fstream>

class EthernetPacket;
class ecpriPacket;

class Visitor
{
public:
	std::ofstream fileStream;
	virtual void writePacket(EthernetPacket* ethpacket, int packetNumber) = 0;
	virtual void writePacket(ecpriPacket* ecpriPacket, int packetNumber) = 0;
};