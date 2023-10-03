#include "../header/Packet/Packet.h"
#include "../header/fileVisitor/fileWriteVisitor.h"
#include "../header/Packet/ecpriPacket.h"
#include "../header/Packet/EthernetPacket.h"
#include "../header/fileVisitor/visitor.h"
#include "../header/Parser/EthernetParser.h"
#include "../header/Parser/EcpriParser.h"

int main()
{
	Packet *p1 = new EthernetPacket();
	std::string rawPacket = "FB555555555555D5011B19000000ECCD655507D988F70B120040EE007F630000000005397FB111221122ABBADEADBEEFCAFEFEED0001057F0000633090181625A4E8FDEC00FECDDCEFFEFF4444444455555555CAFECC000F70B3";
	p1->setRawPacket(rawPacket);
	EthernetParser *ethParser = new EthernetParser();
	ethParser->setRawPacket(rawPacket);

	p1= ethParser->getParsedPacket();
	

	//
	std::string ecpriRawPacket = "FB555555555555D50000000000C1ECCD655507D9AEFE1002001480680080900000000101D10000100000FFFE7E0400000000000000000000000000000000000000000000B329AA60";
	Packet* p2 = new ecpriPacket();
	p2->setRawPacket(ecpriRawPacket);
	EcpriParser *ecpriParser = new EcpriParser();
	
	ecpriParser->setRawPacket(ecpriRawPacket);
	p2 = ecpriParser->getParsedPacket();


	// Could not test for an ecpripacket
	// because "Error C2039 'setProtocolVer': is not a member of 'Packet'
	Visitor *v = new FileWriteVisitor("myfile.txt");
	p1->accept(v, 0);
	p2->accept(v, 1);

	// p2->accept(v, 1);
	v->fileStream.close();
	return 0;
}