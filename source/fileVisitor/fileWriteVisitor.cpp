#include "../../header/fileVisitor/FileWriteVisitor.h"


FileWriteVisitor::FileWriteVisitor(std::string fileName)
{
	this->fileStream.open(fileName);
}

void FileWriteVisitor::writePacket(EthernetPacket* ethpacket)
{
	fileStream << ethpacket->getRawPacket() << "\n";
	fileStream << "CRC: " << ethpacket->getCrc() << "\n";
	fileStream << "Destination Address: " << ethpacket->getDstAddr() << "\n";
	fileStream << "Source Address: " << ethpacket->getSrcAddr() << "\n";
	fileStream << "Type: " << ethpacket->getType() << "\n";
}

void FileWriteVisitor::writePacket(EcpriPacket* ecpripacket)
{
	fileStream << ecpripacket->getRawPacket() << "\n";
	fileStream << "CRC: " << ecpripacket->getCrc() << "\n";
	fileStream << "Concatenation Indicator: " << ecpripacket->getConcatenationIndicator() << "\n";
	fileStream << "Destination Address: " << ecpripacket->getDstAddr() << "\n";
	fileStream << "Message Type: " << ecpripacket->getMsgType() << "\n";
	fileStream << "Payload Size: " << ecpripacket->getPayloadSize() << "\n";
	fileStream << "Protocol Version: " << ecpripacket->getProtocolVer() << "\n";
	fileStream << "RTC ID: " << ecpripacket->getRtcId() << "\n";
	fileStream << "Sequence ID: " << ecpripacket->getSeqId() << "\n";
	fileStream << "Source Address: " << ecpripacket->getSrcAddr() << "\n";
	fileStream << "Type: " << ecpripacket->getType() << "\n";
}
