#include<myheader.h>

#define MAXBUFF 1024
#define PORTNO 4003

int main()

{
		int sfd = 0, retValue=0, csfd=0;
	int clientAddlen = 0;

	struct sockaddr_in serv_address;

	char msg[MAXBUFF] = {0,};

	sfd = socket(AF_INET,SOCK_STREAM,0);

	if(sfd < 0)
	{
		perror("socket() ");
		exit(EXIT_FAILURE);
	}
	printf("\nSocket created with sockfd : %d",sfd);

	//reset/set address of client 

	memset(&serv_address,'\0',sizeof(serv_address));

	// setting of Server side ipaddress and port no
	serv_address.sin_family = AF_INET;
	serv_address.sin_port = htons(PORTNO);
	serv_address.sin_addr.s_addr = inet_addr("127.0.0.1");

	retValue = connect(sfd,(struct sockaddr *)&serv_address, sizeof(serv_address));

	if(retValue < 0)
	{
		perror("connect()");
		exit(EXIT_FAILURE);
	}

	printf("\nClient: Connected to the server\n");
	while(1)
	{
	read(sfd,msg,MAXBUFF);

	printf("%s",msg);

	strcpy(msg,"Hello from the client\n");
	write(sfd,msg, strlen(msg));
	}
	close(sfd);






return 0;
}
