#ifndef RUNNER_H
#define RUNNER_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "./Parser/ParserFactory.h"
// #include "./Parser/Parser.h"
#include "./Packet/Packet.h"
#include "../header/fileVisitor/visitor.h"
#include "../header/fileVisitor/fileWriteVisitor.h"
class Runner
{
private:
    std::vector<std::string> rawPackets;
    std::vector<Packet *> parsedPackets;

public:
    void readPackets(std::string);
    void parsePackets();
    void writeParsedPackets(std::string);
    ~Runner();
};
#endif