#include "../../header/Parser/EcpriParser.h"

std::string EcpriParser::getConcatenationIndicator()
{
    return rawPacket.substr(PacketFields::CONCATENATION_INDICATOR_START, PacketFields::CONCATENATION_INDICATOR_SIZE);
}

std::string EcpriParser::getMessageType()
{
    return rawPacket.substr(PacketFields::MSG_TYPE_START, PacketFields::MSG_TYPE_SIZE);
}

std::string EcpriParser::getPayloadSize()
{
    return rawPacket.substr(PacketFields::PAYLOAD_START, PacketFields::PAYLOAD_SIZE);
}

std::string EcpriParser::getProtocolVersion()
{
    return rawPacket.substr(PacketFields::PROTOCOL_VER_START, PacketFields::PROTOCOL_VER_SIZE);
}

std::string EcpriParser::getSequenceId()
{
    return rawPacket.substr(PacketFields::SEQ_ID_START, PacketFields::SEQ_ID_SIZE);
}

std::string EcpriParser::getRtcId()
{
    return rawPacket.substr(PacketFields::RTC_ID_START, PacketFields::RTC_ID_SIZE);
}

ecpriPacket* EcpriParser::getParsedPacket() 
{
    ecpriPacket* ecrpiPacket = new ecpriPacket();
    ecrpiPacket->setCrc(getCRC());
    ecrpiPacket->setConcatenationIndicator(getConcatenationIndicator());
    ecrpiPacket->setDstAddr(getDestinationAddress());
    ecrpiPacket->setMsgType(getMessageType());
    ecrpiPacket->setPayloadSize(getPayloadSize());
    ecrpiPacket->setProtocolVer(getProtocolVersion());
    ecrpiPacket->setRtcId(getRtcId());
    ecrpiPacket->setSeqId(getSequenceId());
    ecrpiPacket->setSrcAddr(getSourceAddress());
    ecrpiPacket->setType(getType());
    ecrpiPacket->setRawPacket(rawPacket);

    return ecrpiPacket;
}