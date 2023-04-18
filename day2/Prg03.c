# include <myheader.h>

int main()
{
	int shm_id;
	key_t key= 0x1001;
	shm_id =  shmget(key, 10, IPC_CREAT|0666);
	if(shm_id < 0)
	{
		perror("shmget() ");
		exit(EXIT_FAILURE);
	}
	printf("\nShared memory is generated with id %d\n", shm_id);
	printf("\n\n");
	return (EXIT_SUCCESS);
}
