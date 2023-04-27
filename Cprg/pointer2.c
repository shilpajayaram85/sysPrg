#include <stdio.h>

int main()
{

	int a[3] = {1,2,3};

	int i;
	
	int *ptr = a;
	printf("%d\n", a[-1]);
	for(i=0; i<5; i++)
	{
		printf("%d\n",*ptr);
		ptr++;
	}
	printf("\n\n");
	return 0;
}
