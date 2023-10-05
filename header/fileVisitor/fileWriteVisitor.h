#ifndef FILEWRITEVISITOR_H
#define FILEWRITEVISITOR_H

#include "Visitor.h"
#include "../Packet/EthernetPacket.h"
#include "../Packet/EcpriPacket.h"
#include <string> 
#include <iostream>

class FileWriteVisitor : public Visitor
{
public:
	FileWriteVisitor(std::string);
	void writePacket(EthernetPacket*);
	void writePacket(EcpriPacket*);
};

#endif