#include <myheader.h>

void func(int sigNum)
{
	printf("\nSignal Number : %d", sigNum);
	if(sigNum == 8)
	{
		printf("\nDivide by Zero error\n");
		exit(EXIT_FAILURE);
	}
	if(sigNum == 11)
	{
	printf("\n No space is alloted for the string\n");
	exit(EXIT_FAILURE);
	}
}

int main()
{
	int pid,i;
	signal(SIGUSR1,func);
	pid = fork();
	
	if(pid == 0)
	{
		sleep(2);
		printf("\nChild Process\n");
		kill(getppid(),SIGUSR1);
	}
	else
	{
		for(i= 1; i <= 100; i++)
			printf
		
