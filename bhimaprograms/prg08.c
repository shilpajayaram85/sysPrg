#include <myheader.h>

void func(int sigNum)
{
	printf("\nSignal Number : %d", sigNum);
	if(sigNum == 8){
		printf("\nDivide by zero error\n");
		exit(EXIT_FAILURE);
	}
	if(sigNum == 11){
		printf("\nNo space alloted for the string\n");
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
		sleep(1);
		kill(getppid(),SIGUSR1);
		exit(0);
	}
	else
	{
		for(i=0;i<10;i++){
			printf(" %d",i);
			sleep(1);
		}
		printf("Parent exiting\n");
	}


	return 0;
}