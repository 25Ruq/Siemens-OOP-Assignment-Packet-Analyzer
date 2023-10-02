#include "fileWriteVisitor.h"

fileWriteVisitor::fileWriteVisitor(std::string fileName)
{
	this->fileStream.open(fileName);
	//closing in the drive code
}
void fileWriteVisitor::writePacket(ethPacket* ethpacket, int packetNumber)
{
	fileStream << "packet # " << std::to_string(packetNumber) << ":\n";
	fileStream << ethpacket->getPacketLine() << "\n";
	fileStream << "CRC: " << ethpacket->getCrc() << "\n";
	fileStream << "Destination Address: " << ethpacket->getDstAddr() << "\n";
	fileStream << "Source Address: " << ethpacket->getSrcAddr() << "\n";
	fileStream << "Type: " << ethpacket->getType() << "\n";
	fileStream << std::string(150, '*') << "\n";
}

void fileWriteVisitor::writePacket(ecpriPacket* ecpripacket, int packetNumber)
{
	// to do after finshing ethpacket
}