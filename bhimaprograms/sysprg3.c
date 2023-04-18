#include <myheader.h>

int main()
{
	int shm_id, pid;
	char *buff = NULL;
	char rbuff[1024];

	key_t key = ftok("/home/bhima/sysPrg/sysPrg",10002);
	shm_id = shmget(key,1024,IPC_CREAT|0666);
	if(shm_id < 0)
	{
		perror("shmget() ");
		exit(EXIT_FAILURE);
	}
	printf("\nShared memory is generated with ID: %d", shm_id);

	buff = (char *)shmat(shm_id, 0,0);

	printf("\nAddress of the buffer pointer: %u",buff);

	pid = fork();

	if(pid == 0)
	{
		strcpy(buff,"This is a parent and child shared memory access");
	}
	else
	{
		wait(0);
		strcpy(rbuff, buff);
		printf("\nThe msg from child: %s\n", rbuff);
	}

	

	shmdt(buff);

	printf("\n\n");

	return 0;
}
