#ifndef PARSER_H
#define PARSER_H

#include <string>
#include "../Packet/Packet.h"
#include "../constants/PacketFields.h"
class Parser
{
protected:
    std::string rawPacket;

public:
    std::string getDestinationAddress();
    std::string getSourceAddress();
    std::string getCRC();
    std::string getType();
    void setRawPacket(std::string rawPacket);
    static std::string getPacketType(std::string);
    virtual Packet* getParsedPacket() = 0;
};

#endif