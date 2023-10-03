#ifndef ECPRI_PARSER_H
#define ECPRI_PARSER_H

#include "Parser.h"
#include "../Packet/ecpriPacket.h"
#include <string>

class EcpriParser : public Parser
{
private:
    std::string getConcatenationIndicator();
    std::string getMessageType();
    std::string getPayloadSize();
    std::string getProtocolVersion();
    std::string getSequenceId();
    std::string getRtcId();

public:
    ecpriPacket *getParsedPacket() override;
};
#endif