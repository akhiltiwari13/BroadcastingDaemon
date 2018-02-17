#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	
	sockaddr_in *server= (sockaddr_in *)malloc(sizeof(sockaddr_in));
	server->sin_family= AF_INET; //using the address family of IPV4.
 	(server->sin_addr).s_addr= htonl(INADDR_ANY); //INADDR_ANY Macro lets the server listen to all available IPs of the server.
/*
 * hardcoded the server to run on port 1067 as all the ports <= 1024 are reserved for processes running with root privileges.
 */		
	server->sin_port= htons(1067); 
	int sock= socket(AF_INET, SOCK_STREAM, 0); //Created a socket for IPV4 endpt addresss and using TCP protocol.
		
	bind(sock, (struct sockaddr *)server, sizeof(sockaddr_in)); //bind the server to the socket
	
	listen(sock, 5); //an iterative server using a queue of length 5;
	printf("listening\n");
	
	
	sockaddr_in *client= (sockaddr_in *)malloc(sizeof(sockaddr_in));
	socklen_t client_len;
	int fd;
	while(1)
	{
	client_len =sizeof(sockaddr_in);
	fd= accept(sock, (struct sockaddr *)client, &client_len);
	printf("got connection\n");
	printf("response\n");
	}
	close(fd);

	return 0;
}
