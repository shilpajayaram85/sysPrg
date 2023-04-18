#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{

	//int pid;
	fork();
	fork();
	fork();	
	//printf("PID : %d\n", getpid());
	//printf("PPID : %d\n", getppid());
	printf("Hello");
	//printf("\n\n");
	return 0;

}	
