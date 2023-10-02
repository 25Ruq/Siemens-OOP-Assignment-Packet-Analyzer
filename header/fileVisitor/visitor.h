#pragma once
#include <fstream>

class ethPacket;
class ecpriPacket;

class visitor
{
public:
	std::ofstream fileStream;
	virtual void writePacket(ethPacket* ethpacket, int packetNumber) = 0;
	virtual void writePacket(ecpriPacket* ecpriPacket, int packetNumber) = 0;
};