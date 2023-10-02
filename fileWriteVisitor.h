#pragma once
#include"visitor.h"
#include "ethPacket.h"
#include "ecpriPacket.h"
#include <string> 
#include <iostream>

class fileWriteVisitor : public visitor
{
public:
	fileWriteVisitor(std::string fileName);
	void writePacket(ethPacket* ethpacket, int packetNumber);
	void writePacket(ecpriPacket* ecpriPacket, int packetNumber);
};

