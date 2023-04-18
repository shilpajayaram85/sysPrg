#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/wait.h>

int findSumOdd()
{
	int i, sum = 0;
	for(i = 0; i < 100; i++)
	{
		if((i%2)!=0)
		 sum = sum +i;
	}
	return sum;
}




int findSumEven()
{
	int i, sum = 0;
	for(i = 0; i < 100; i++)
	{
		if((i%2)==0)
		 sum = sum +i;
	}
	return sum;
}







int main()

{
	
	int pid;
	pid = fork();
	if(pid < 0)
	{
		perror("fork():");
		return (EXIT_FAILURE);
	}
	if(pid>0)
	{
	//sleep(3);
	//scanf(" ");
	wait(0);
	printf("\nParent Process\n");
	printf("PID : %d\n", getpid());
	printf("PPID : %d\n", getppid());
	printf("PID from the fork(): %d\n", pid);
	printf("Sum Even: %d\n", findSumEven());
	}
	else
	{
	printf("\nChild Process\n");
	printf("PID : %d\n", getpid());
	printf("PPID : %d\n", getppid());
	printf("PID from the fork():%d\n", pid);
	printf("Sum Odd: %d\n", findSumOdd());
	}
	return 0;
}
