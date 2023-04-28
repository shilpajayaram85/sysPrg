#include <stdio.h>

int main()
{

	int a=10,b=200,c=30;

	if(a>b)
	{
		
		if(a>c)
			printf("\nA is bigger\n");
		else
			printf("\nC is Bigger\n");
	}
	else
	{
		if(b>c)
			printf("\nb is bigger\n");
		else
			printf("\nC is Bigger\n");
	}

	printf("\nEnd of the prog\n");

}