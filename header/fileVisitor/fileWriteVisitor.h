#pragma once
#include "../../header/fileVisitor/Visitor.h"
#include "../../header/Packet/EthernetPacket.h"
#include "../../header/Packet/ecpriPacket.h"
#include <string> 
#include <iostream>

class FileWriteVisitor : public Visitor
{
public:
	FileWriteVisitor(std::string fileName);
	void writePacket(EthernetPacket* ethpacket, int packetNumber);
	void writePacket(ecpriPacket* ecpriPacket, int packetNumber);
};

