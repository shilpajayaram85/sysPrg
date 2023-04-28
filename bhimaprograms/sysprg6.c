#include <myheader.h>

typedef struct  msgbuff
{
	long mtype;
	char msg[1024];
}MSG;

int main()
{
	int msgid;
	key_t key = ftok("/home/bhima/sysPrg/sysPrg",10003);
	MSG m;
	msgid = msgget(key, IPC_CREAT|0666);
	if(msgid<0)
	{
		perror("msgget() ");
		exit(EXIT_FAILURE);
	}

	/*
	m.mtype = 10;
	strcpy(m.msg, "This is msg1");

	msgsnd(msgid, &m, sizeof(MSG), 0);
	*/

	msgrcv(msgid, &m, sizeof(MSG),10,0);

	printf("\nDetails of the message is\n");
	printf("\nMSG type: %ld", m.mtype);
	printf("\nMSG: %s",m.msg);






	return 0;
}