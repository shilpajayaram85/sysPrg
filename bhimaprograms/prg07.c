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
	int a=10, b=1, c;
	int pid;
	char *name = NULL;
	signal(SIGINT, func);
	signal(SIGFPE, func);
	signal(SIGSEGV, func);
	signal(SIGCHLD, func);

	// c = a/b;

	// strcpy(name,"bhima");
	pid = fork();
	if( pid == 0)
	{
		printf("\nChild Process\n");
		sleep(3);
		// scanf(" ");
		// while(1);
	}
	else
	{
		// wait(0);
		printf("\nParent process\n");
		kill(pid, SIGINT);
		sleep(6);
		printf("\nParent exiting\n");
	}

	// while(1);

	return 0;
}