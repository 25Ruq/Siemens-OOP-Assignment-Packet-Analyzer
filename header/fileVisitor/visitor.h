#ifndef VISITOR_H
#define VISITOR_H

#include <fstream>

// forward declaration
class EthernetPacket;
class EcpriPacket;

class Visitor
{
public:
	std::ofstream fileStream;
	virtual void writePacket(EthernetPacket*) = 0;
	virtual void writePacket(EcpriPacket*) = 0;
};
#endif