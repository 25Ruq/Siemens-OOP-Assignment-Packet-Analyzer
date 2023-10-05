#ifndef PACKET_H
#define PACKET_H

#include <string>
#include "../fileVisitor/visitor.h"

class Packet
{
private:
    std::string destinationAddress;
    std::string sourceAddress;
    std::string crc;
    std::string type;
    std::string rawPacket;

public:
    void setSourceAddress(std::string sourceAddress);
    void setDestinationAddress(std::string destinationAddress);
    void setType(std::string type);
    void setCRC(std::string crc);
    void setRawPacket(std::string rawPacket);
    std::string getSourceAddress();
    std::string getDestinationAddress();
    std::string getType();
    std::string getCRC();
    std::string getRawPacket();
    virtual void accept(Visitor*) = 0;
};
#endif