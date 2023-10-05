#ifndef FILEWRITEVISITOR_H
#define FILEWRITEVISITOR_H

#include "Visitor.h"
#include "../Packet/EthernetPacket.h"
#include "../Packet/ecpriPacket.h"
#include <string> 
#include <iostream>

class FileWriteVisitor : public Visitor
{
public:
	FileWriteVisitor(std::string fileName);
	void writePacket(EthernetPacket* ethpacket);
	void writePacket(ecpriPacket* ecpriPacket);
};

#endif