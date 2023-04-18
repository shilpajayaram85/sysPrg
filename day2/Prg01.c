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
	int a=10, b=0, c;
	char *name = NULL;
	signal(SIGINT, func);
	signal(SIGFPE, func);
	signal(SIGSEGV, func);
	signal(SIGCHLD, func);
	//c = a/b;
	//strcpy(name, "shilpa");
	int pid = fork();
	if(pid == 0)
	{
		printf("\nChild Process\n");
		sleep(5);
		//while(1);
		//scanf(" ");
	}
	else
	{
		//wait(0);
		printf("\n Parent process\n");
		kill(pid,SIGINT);
		sleep(6);
		printf("\nParent exiting\n");
	}
//	while(1);
	return 0;
}
