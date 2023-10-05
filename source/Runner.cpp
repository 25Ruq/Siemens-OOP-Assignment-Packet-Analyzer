#include "../header/Runner.h"

void Runner::readPackets(std::string filename)
{
    std::fstream fileToRead;
    fileToRead.open(filename, std::ios::in);
    std::string line;
    while (getline(fileToRead, line))
    {
        rawPackets.push_back(line);
    }
}
void Runner::parsePackets()
{
    for (int i = 0; i < rawPackets.size(); ++i)
    {
        std::string packetType = Parser::getPacketType(rawPackets[i]);
        Parser *unknownParser = ParserFactory::getParser(packetType);
        if (unknownParser == nullptr)
        {
            std::cout << "Unknown packet type" << std::endl;
            continue;
        }
        unknownParser->setRawPacket(rawPackets[i]);
        Packet *parsedPacket = unknownParser->getParsedPacket();
        parsedPackets.push_back(parsedPacket);
        delete unknownParser;
    }
}
void Runner::writeParsedPackets(std::string fileName)
{
    Visitor *visitor = new FileWriteVisitor(fileName);
    for (int i = 0; i < parsedPackets.size(); ++i)
    {
        visitor->fileStream << "packet # " << std::to_string(i) << ":\n";
        parsedPackets[i]->accept(visitor);
    }
    visitor->fileStream.close();
}

Runner::~Runner()
{
    for (int i = 0; i < parsedPackets.size(); ++i)
    {
        delete parsedPackets[i];
    }
}