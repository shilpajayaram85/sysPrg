/*
							fork()1
							fork()2
							fork()3
							printf
			p1									c1
			f2									f2
			f3									f3
			printf								printf
		p2			c2							p3		c3		
		f3			f3							f3		f3	
		printf		printf						printf	printf
	p4		c4		p5   	c5
	printf	printf printf	printf

*/



#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int findSumOdd()
{
	int i, sum=0;
	for(i=0;i<100;i++)
	{
		if((i%2) != 0)
			sum += i;
	}

	return sum;
}

int findSumEven()
{
	int i, sum=0;
	for(i=0;i<100;i++)
	{
		if((i%2) == 0)
			sum += i;
	}

	return sum;
}

int main()
{
	int pid;
	
	pid = fork();
	if(pid<0)
	{
		perror("fork(): ");
		exit(EXIT_FAILURE);
	}
	
	if(pid>0){
		wait(0);
		printf("\nParent Process\n");
		printf("PID : %d\n", getpid());
		printf("PPID : %d\n", getppid());
		printf("PID from fork(): %d\n", pid);
		printf("Sum Even: %d\n", findSumEven());
	}
	else
	{
		printf("\nChild Process\n");
		printf("PID : %d\n", getpid());
		printf("PPID : %d\n", getppid());
		printf("\nPID from fork(): %d\n", pid);
		printf("Sum Odd: %d\n", findSumOdd());
	}
	
	
	return 0;
}