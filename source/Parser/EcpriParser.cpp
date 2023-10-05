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

EcpriPacket* EcpriParser::getParsedPacket() 
{
    EcpriPacket* ecrpiPacket = new EcpriPacket();
    ecrpiPacket->setCRC(getCRC());
    ecrpiPacket->setConcatenationIndicator(getConcatenationIndicator());
    ecrpiPacket->setDestinationAddress(getDestinationAddress());
    ecrpiPacket->setMessageType(getMessageType());
    ecrpiPacket->setPayloadSize(getPayloadSize());
    ecrpiPacket->setProtocolVersion(getProtocolVersion());
    ecrpiPacket->setRtcId(getRtcId());
    ecrpiPacket->setSequenceId(getSequenceId());
    ecrpiPacket->setSourceAddress(getSourceAddress());
    ecrpiPacket->setType(getType());
    ecrpiPacket->setRawPacket(rawPacket);

    return ecrpiPacket;
}
