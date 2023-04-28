#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch[20];

	int a;
	
	fgets(ch,20,stdin);

	a = atoi(ch);
	printf("\nstring got from stdin: %s",ch);
	printf("\nconverter integer : %d\n", a);
	return 0;
}