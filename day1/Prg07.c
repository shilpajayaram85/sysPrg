#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main()
{

	extern **environ;
	int pid, i;
	pid = fork();
	if(pid == 0)
	{
		printf("\nChild Process\n");
		for(i=0; environ[i];i++)
			printf("%s\n",environ[i]);	
	}
	else
	{
		wait(0);
		printf("\nParent Process ended\n");
	}
return 0;
}
	
