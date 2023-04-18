#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	printf("\nI am into prg04 process\n");
	printf("\nMy PID: %d", getpid());
	if(fork() == 0){
		execl("/home/bhima/sysPrg/prg3","prg3", argv[1],(char *)0);
	}
	else
		{
			wait(0);
			printf("\nThis line does not print\n");
		}

	return 0;
}