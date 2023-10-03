#include "../../header/Parser/EcpriParser.h"

std::string EcpriParser::getConcatenationIndicator()
{
    // Todo: implement
    return "";
}
std::string EcpriParser::getMessageType()
{
    // Todo: implement
    return "";
}
std::string EcpriParser::getPayloadSize()
{
    // Todo: implement
    return "";
}
std::string EcpriParser::getProtocolVersion()
{
    // Todo: implement
    return "";
}
std::string EcpriParser::getSequenceId()
{
    // Todo: implement
    return "";
}
std::string EcpriParser::getRtcId()
{
    // Todo: implement
    return "";
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