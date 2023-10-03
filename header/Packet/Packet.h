#ifndef PACKET_H
#define PACKET_H

#include <string>
#include "../fileVisitor/visitor.h"

class Packet
{
private:
    std::string packetLine;
    std::string dstAddr;
    std::string srcAddr;
    std::string crc;
    std::string type;

public:
    void setPacketLine(std::string packetLine);
    void setSrcAddr(std::string srcAddr);
    void setDstAddr(std::string dstAddr);
    void setType(std::string type);
    void setCrc(std::string crc);
    std::string getPacketLine();
    std::string getSrcAddr();
    std::string getDstAddr();
    std::string getType();
    std::string getCrc();
    virtual void accept(Visitor *fileWriteVisitor, int packetNumber) = 0;
};
#endif