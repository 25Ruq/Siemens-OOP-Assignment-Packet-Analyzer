#include "../../header/fileVisitor/FileWriteVisitor.h"


FileWriteVisitor::FileWriteVisitor(std::string fileName)
{
	this->fileStream.open(fileName);
}

void FileWriteVisitor::writePacket(EthernetPacket* ethpacket)
{
	fileStream << ethpacket->getRawPacket() << "\n";
	fileStream << "CRC: " << ethpacket->getCRC() << "\n";
	fileStream << "Destination Address: " << ethpacket->getDestinationAddress() << "\n";
	fileStream << "Source Address: " << ethpacket->getSourceAddress() << "\n";
	fileStream << "Type: " << ethpacket->getType() << "\n";
}

void FileWriteVisitor::writePacket(EcpriPacket* ecpripacket)
{
	fileStream << ecpripacket->getRawPacket() << "\n";
	fileStream << "CRC: " << ecpripacket->getCRC() << "\n";
	fileStream << "Concatenation Indicator: " << ecpripacket->getConcatenationIndicator() << "\n";
	fileStream << "Destination Address: " << ecpripacket->getDestinationAddress() << "\n";
	fileStream << "Message Type: " << ecpripacket->getMessageType() << "\n";
	fileStream << "Payload Size: " << ecpripacket->getPayloadSize() << "\n";
	fileStream << "Protocol Version: " << ecpripacket->getProtocolVersion() << "\n";
	fileStream << "RTC ID: " << ecpripacket->getRtcId() << "\n";
	fileStream << "Sequence ID: " << ecpripacket->getSequenceId() << "\n";
	fileStream << "Source Address: " << ecpripacket->getDestinationAddress() << "\n";
	fileStream << "Type: " << ecpripacket->getType() << "\n";
}
