#include <myheader.h>

#define MAXBUFF 1024
#define PORTNO 4003

int main()
{

	int sfd = 0 , retValue = 0, csfd = 0;
	int clientAddlen = 0;
	struct sockaddr_in serv_address, client_address;
	
	char msg[MAXBUFF] = {0,};
	sfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sfd<0)
	{
		perror("Socket()..");
		return (EXIT_FAILURE);
	}
	
	printf("\nSocket created with sockfd : %d", sfd);

	memset(&serv_address, '\0', sizeof(serv_address));
	
	serv_address.sin_family = AF_INET;
	serv_address.sin_port = htons(PORTNO);
	serv_address.sin_addr.s_addr = inet_addr("127.0.0.1");

	retValue = bind(sfd, (struct sockaddr *) &serv_address, sizeof(serv_address));

	if(retValue < 0)
	{
		perror("bind()..");
		exit(EXIT_FAILURE);
	}
	printf("\nBinded the server to the ipaddress and port no");

	retValue = listen(sfd, 5);
	if(retValue < 0)
	{
		perror("listen()...");
		exit(EXIT_FAILURE);
	}
	printf("\n Listening to clients now ");

	csfd = accept(sfd, (struct sockaddr*) &client_address, &clientAddlen);

	if(csfd<0)
	{	

		perror("accept()...");
		return(EXIT_FAILURE);
	}

		printf("\n Server : Client got a connection\n");

		strcpy(msg, "==============================================================");
		strcat(msg, "\n=============== Welcome to Capgemini Server=================");
		strcat(msg, "==============================================================");
	while(1)
	{
		write(csfd, msg, strlen(msg));
		memset(msg, '\0', MAXBUFF);
		read(csfd, msg,MAXBUFF);
	}
		close (sfd);

		return 0;

	}
