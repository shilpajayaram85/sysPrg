#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc ,char *argv[])
{
	printf("Hello!!\n");
	printf("%s\n", argv[1]);
}
