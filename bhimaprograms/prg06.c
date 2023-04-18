#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
	extern **environ;
	int pid, i;
	pid = fork();
	if(pid == 0)
	{
		printf("\nChild process\n");
		for(i=0;environ[i];i++)
			printf("%s\n",environ[i]);
	}
	else
	{
		wait(0);
		printf("\nParent Process ended\n");
	}

	return 0;
}
