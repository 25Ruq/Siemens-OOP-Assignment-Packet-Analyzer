#include "../header/Packet/Packet.h"
#include "../header/fileVisitor/fileWriteVisitor.h"
#include "../header/Packet/ecpriPacket.h"
#include "../header/Packet/EthernetPacket.h"
#include "../header/fileVisitor/visitor.h"

int main() {
	Packet* p1 = new EthernetPacket();
	p1->setPacketLine("FB555555555555D5011B19000000ECCD655507D988F70B120040EE007F630000000005397FB111221122ABBADEADBEEFCAFEFEED0001057F0000633090181625A4E8FDEC00FECDDCEFFEFF4444444455555555CAFECC000F70B3");
	p1->setCrc("1");
	p1->setType("2");
	p1->setDstAddr("3");
	p1->setSrcAddr("4");
	Packet* p2 = new ecpriPacket();
	//Could not test for an ecpripacket
	//because "Error C2039 'setProtocolVer': is not a member of 'Packet'
	Visitor* v = new FileWriteVisitor("myfile.txt");
	p1->accept(v, 0);
	//p2->accept(v, 1);
	v->fileStream.close();
	return 0;
}