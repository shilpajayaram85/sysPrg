#include <myheader.h>

int main()
{
	int shm_id;
	char *buff = NULL;

	key_t key = ftok("/home/bhima/sysPrg/sysPrg",10001);
	shm_id = shmget(key,1024,IPC_CREAT|0666);
	if(shm_id < 0)
	{
		perror("shmget() ");
		exit(EXIT_FAILURE);
	}
	printf("\nShared memory is generated with ID: %d", shm_id);

	buff = (char *)shmat(shm_id, 0,0);// (char *)malloc(10)

	printf("\nAddress of the buffer pointer: %u",buff);

	// strcpy(buff,"This is a c Programming class");

	printf("\nBuffer content: %s\n",buff);
	shmdt(buff);

	printf("\n\n");

	return 0;
}
