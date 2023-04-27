#include<stdio.h>

int main()
{

	const int a = 10;
	//a = 15;
	
	int * p = NULL;
	p = &a;
	printf("\na = %d\n",a);
	*p =45;
	printf("\na = %d\n", a);
	return 0;
}
