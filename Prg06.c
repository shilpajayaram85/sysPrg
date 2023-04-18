#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	printf("\nI am into Prg06 Process\n");
	printf("\nMy PID: %d", getpid());
	if(fork() == 0)
	{
	execl("/home1/trainer02/Shilpa/sysPrg/Prg05", "Prg05 shilpa",(char*)0);
	}
	else
	{
		printf("\nThis line does not executed\n");
	}
	return 0;
}
