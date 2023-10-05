
#include "../header/Runner.h"
int main()
{
	std::string fileName = "input.txt";
	std::string outputFileName = "output.txt";
	Runner *runner = new Runner();
	runner->readPackets(fileName);
	runner->parsePackets();
	runner->writeParsedPackets(outputFileName);
	delete runner;
	return 0;
}