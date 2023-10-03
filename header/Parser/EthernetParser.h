#ifndef ETHERNETPARSER_H
#define ETHERNETPARSER_H


#include "Parser.h"
#include "../Packet/EthernetPacket.h"
#include <string>

class EthernetParser : public Parser
{
public:
    EthernetPacket *getParsedPacket() override;
};


#endif