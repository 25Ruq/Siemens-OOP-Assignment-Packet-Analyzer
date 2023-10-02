#include "../../header/Parser/EcpriParser.h"

std::string EcpriParser::getConcatenationIndicator()
{
   //Todo: implement
    return "";
}
std::string EcpriParser::getMessageType()
{
   //Todo: implement
    return "";
}
std::string EcpriParser::getPayloadSize()
{
   //Todo: implement
    return "";
}
std::string EcpriParser::getProtocolVersion()
{
   //Todo: implement
    return "";
}
std::string EcpriParser::getSequenceId()
{
   //Todo: implement
    return "";
}
std::string EcpriParser::getRtcId()
{
   //Todo: implement
    return "";
}
// eCRPIFrame *EcpriParser::getParsedFrame()
// {
//     eCRPIFrame *ecrpiFrame = new eCRPIFrame();
//     ecrpiFrame->setCRC(this->getCRC());
//     ecrpiFrame->setConcatenationIndicator(this->getConcatenationIndicator());
//     ecrpiFrame->setDestinationAddress(this->getDestinationAddress());
//     ecrpiFrame->setMessageType(this->getMessageType());
//     ecrpiFrame->setPayloadSize(this->getPayloadSize());
//     ecrpiFrame->setProtocolVersion(this->getProtocolVersion());
//     ecrpiFrame->setRtcId(this->getRtcId());
//     ecrpiFrame->setSequenceId(this->getSequenceId());
//     ecrpiFrame->setSourceAddress(this->getSourceAddress());
//     ecrpiFrame->setType(this->getType());
//     ecrpiFrame->setRawPacket(this->rawPacket);

//     return ecrpiFrame;
// }