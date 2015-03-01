//A program to send arp packets

#include <sys/socket.h>
#include <netpacket/packet.h>
#include <net/ethernet.h>
#include <boost/shared_ptr>

class packet
{
public:
    packet(int sock_type, int proto)
    {
        sock = new socket(AF_PACKET, sock_type, proto); 
    } 
    struct sockaddr_ll addr_types;
    int sendPacket();
    packet_socket getSocket();
private:
    boost::shared_ptr<packet_socket> sock;
};
