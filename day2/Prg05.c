# include <myheader.h>

int main()
{
	int shm_id;
	char *buff = NULL;
	key_t key= ftok("/home1/trainer02/sysPrg/day2", 10001);
	shm_id =  shmget(key, 1024, IPC_CREAT|IPC_EXCL|0666);
	if(shm_id < 0)
	{
		perror("shmget() ");
		exit(EXIT_FAILURE);
	}
	
	printf("\nShared memory is generated with id %d\n", shm_id);
	buff = (char *) shmat(shm_id, 0,0);
	//buff = (char *) malloc(10);
	//strcpy(buff, "This is a C Programming class");
	printf("\n Buffer Content: %s\n", buff);
	shmdt(buff);
	
	printf("\n Address of the buffer pointed is %u\n", buff);
	printf("\n\n");
	return (EXIT_SUCCESS);
}
