#include <stdio.h>

struct  emp
{
	int empid;
	char ename[20];
};

int main()
{

	int x=5;
	int y=2,z=100;
	long long int g=0;
	/*
	z=--x + ++y;
	*/
	//g = (x>y)?((x>z)?x:z):((y>z)?y:z);
	g = x|y;
	printf("\ng=%lld",g);

	


	/*
	
	int a=5;
	int b=2;
	
	int c=!(a+b);

	c = a ! b;

	0101 5
	0010 2
	0111 7



	*/


	return 0;

}