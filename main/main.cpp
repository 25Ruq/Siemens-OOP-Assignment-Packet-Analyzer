#include "../header/Runner.h"

int main()
{
	std::string inputFileName = "input_packets.txt";
	std::string outputFileName = "output_packets.txt";
	Runner* runner = new Runner();
	runner->readPackets(inputFileName);
	runner->parsePackets();
	runner->writeParsedPackets(outputFileName);
	delete runner;
	return 0;
}