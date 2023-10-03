#include "../../header/Parser/EcpriParser.h"

std::string EcpriParser::getConcatenationIndicator()
{
    return this->rawPacket.substr(PacketFields::CONCATENATION_INDICATOR_START, PacketFields::CONCATENATION_INDICATOR_SIZE);
}
std::string EcpriParser::getMessageType()
{
    return this->rawPacket.substr(PacketFields::MSG_TYPE_START, PacketFields::MSG_TYPE_SIZE);
}
std::string EcpriParser::getPayloadSize()
{
    return this->rawPacket.substr(PacketFields::PAYLOAD_START, PacketFields::PAYLOAD_SIZE);
}
std::string EcpriParser::getProtocolVersion()
{
    return this->rawPacket.substr(PacketFields::PROTOCOL_VER_START, PacketFields::PROTOCOL_VER_SIZE);
}
std::string EcpriParser::getSequenceId()
{
    return this->rawPacket.substr(PacketFields::SEQ_ID_START, PacketFields::SEQ_ID_SIZE);
}
std::string EcpriParser::getRtcId()
{
    return this->rawPacket.substr(PacketFields::RTC_ID_START, PacketFields::RTC_ID_SIZE);
}
ecpriPacket *EcpriParser::getParsedPacket()
{
    ecpriPacket *ecrpiPacket = new ecpriPacket();
    ecrpiPacket->setCrc(this->getCRC());
    ecrpiPacket->setConcatenationIndicator(this->getConcatenationIndicator());
    ecrpiPacket->setDstAddr(this->getDestinationAddress());
    ecrpiPacket->setMsgType(this->getMessageType());
    ecrpiPacket->setPayloadSize(this->getPayloadSize());
    ecrpiPacket->setProtocolVer(this->getProtocolVersion());
    ecrpiPacket->setRtcId(this->getRtcId());
    ecrpiPacket->setSeqId(this->getSequenceId());
    ecrpiPacket->setSrcAddr(this->getSourceAddress());
    ecrpiPacket->setType(this->getType());
    ecrpiPacket->setRawPacket(this->rawPacket);

    return ecrpiPacket;
}