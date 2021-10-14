#include "Socket_udp.h"


#include <arpa/inet.h>
#include <sys/socket.h>
#include <ifaddrs.h>
#include <stdio.h>
#include "iostream"

//omidguard dont touch
Socket_udp::Socket_udp(void)
{

}
void Socket_udp::paddr(unsigned char *a)
{
    printf("%d.%d.%d.%d\n", a[0], a[1], a[2], a[3]);
}
void Socket_udp::Init_Socket_Server(const char *  Group_Addr, int Port_Num)
{
   /* shutdown(inet_addr(Group_Addr),2);



    struct hostent *hp;
    char *host = "simulator";
    int i;
    hp = gethostbyname(host);
    printf("the simulator%s\n",hp);
    std::cout<<"sim   "<<hp<<'\n';
    for (i=0; hp->h_addr_list[i] != 0; i++)
        paddr((unsigned char*) hp->h_addr_list[i]);
    printf("\n");*/
#ifdef WIN
// This stuff initializes winsock
WSAStartup(wVersionRequested, &wsaData);
#elif __linux__

#endif

// Create a multicast socket
Multi_Server_Sock = socket(AF_INET, SOCK_DGRAM, 0);

if (Multi_Server_Sock < 0)
{
	printf("*** ERROR - Create a multicast socket= %d \n", Multi_Server_Sock);
	return;
}
// Create multicast group address information
Server_Addr.sin_family = AF_INET;
    Server_Addr.sin_addr.s_addr =  inet_addr(Group_Addr);
    /*  gethostbyname("simulator")*/;
    /*htonl(INADDR_ANY)*//*inet_addr("127.0.0.1");*//*inet_addr("172.25.0.24")*/;
    /*Server_Addr.sin_addr.s_addr = Group_Addr;*/
    /*'simulator';//inet_addr(Group_Addr);*/
Server_Addr.sin_port = htons(Port_Num);

// Set the TTL for the sends using a setsockopt()
TTL = 1;
//retcode = setsockopt(Multi_Server_Sock, IPPROTO_IP, IP_MULTICAST_TTL,
//	(char *)&TTL, sizeof(TTL));
retcode = setsockopt(Multi_Server_Sock, IPPROTO_IP, SO_BROADCAST,
	(char *)&TTL, sizeof(TTL));
//retcode = setsockopt(socket(AF_INET, SOCK_DGRAM, 0),SOL_SOCKET, SO_BROADCAST,(char *)&TTL, sizeof(TTL));
if (retcode < 0)
{
	printf("*** ERROR - setsockopt() failed with retcode = %d \n", retcode);
	return;
}
// Set addr_len
addr_len = sizeof(Server_Addr);
printf("*** ready to Sending multicast datagrams to '%d' (port = %d) \n",
       Server_Addr.sin_addr.s_addr, Port_Num);}




void Socket_udp::Init_Socket_Client(const char * Group_Addr, int Port_Num, const char * _udp_client_interface)
{
    struct ifaddrs *ifap, *ifa;
    struct sockaddr_in *sa;
    char *addr;
    getifaddrs (&ifap);
    for (ifa = ifap; ifa; ifa = ifa->ifa_next) {
        if (ifa->ifa_addr && ifa->ifa_addr->sa_family==AF_INET) {
            sa = (struct sockaddr_in *) ifa->ifa_addr;
            addr = inet_ntoa(sa->sin_addr);
            if(strcmp(ifa->ifa_name, _udp_client_interface)==0)
            {
                memset(inteface, '\0', sizeof(inteface));
               strcpy(inteface,addr);
//                inteface=addr;127.0.0.1
                printf("find\n");
            }
           // printf("data va family: %s\tAddress: %s\n", ifa->ifa_addr->sa_data, ifa->ifa_addr->sa_family);
            printf("Interface: %s\tAddress: %s\n", ifa->ifa_name, addr);
        }
    }
    //inteface="172.25.0.24";

    freeifaddrs(ifap);
#ifdef WIN
	wVersionRequested = MAKEWORD(1, 1); // Stuff for WSA functions										// This stuff initializes winsock
	WSAStartup(wVersionRequested, &wsaData);
#endif

	// Create a multicast socket and fill-in multicast address information
	Multi_Server_Sock = socket(AF_INET, SOCK_DGRAM, 0);


	// Create client address information and bind the multicast socket
	Client_Addr.sin_family = AF_INET;
	Client_Addr.sin_port = htons(Port_Num);
	Client_Addr.sin_addr.s_addr = INADDR_ANY;

	retcode = bind(Multi_Server_Sock, (struct sockaddr *)&Client_Addr,
		sizeof(struct sockaddr));
	if (retcode < 0)
	{
		printf("*** ERROR - bind() failed with retcode = %d \n", retcode);
		getchar();
		//return;
	}

	// Have the multicast socket join the multicast group
	mreq.imr_multiaddr.s_addr = inet_addr(Group_Addr);
	if(strcmp(inteface,"defult")==0) {
        mreq.imr_interface.s_addr = INADDR_ANY;
        printf("defult cant find UDP_CLIENT_INTERFACE");
    }
        else
	mreq.imr_interface.s_addr= inet_addr(inteface);
	retcode = setsockopt(Multi_Server_Sock, IPPROTO_IP, IP_ADD_MEMBERSHIP,
		(char *)&mreq, sizeof(mreq));
	if (retcode < 0)

	{
		printf("*** ERROR - setsockopt() failed with retcode = %d \n", retcode);
		getchar();
		// return;
	}

}
void Socket_udp::send(char buffer_send[100],int buffer_send_len)
{

	    addr_len = sizeof(Server_Addr);
		// Send buffer as a datagram to the multicast group
		sendto(Multi_Server_Sock, buffer_send, buffer_send_len, 0,(struct sockaddr*)&Server_Addr, addr_len);


}
void Socket_udp::send2ERforce(std::string *buffer_send,int buffer_send_len)
{

    addr_len = sizeof(Server_Addr);
    // Send buffer as a datagram to the multicast group
    sendto(Multi_Server_Sock, &buffer_send, buffer_send_len, 0,(struct sockaddr*)&Server_Addr, addr_len);


}
int Socket_udp::recive(void)
{


	addr_len = sizeof(Client_Addr);
	
		// Receive a datagram from the multicast server
		if ((retcode = recvfrom(Multi_Server_Sock, buffer_recive, sizeof(buffer_recive), 0,
			(struct sockaddr *)&Client_Addr, &addr_len)) < 0) {
			printf("*** ERROR - recvfrom() failed %d \n ", addr_len);
			//getchar();
		}
//getifaddr();
		// Output the received buffer to the screen as a string
		//printf("%s\n", buffer);
		return retcode;
}
void Socket_udp::Close_Socket(void)
{
	// Close and clean-up
#ifdef WIN
	closesocket(Multi_Server_Sock);
WSACleanup();
#elif __linux__
//close(Multi_Server_Sock);
#endif
}


