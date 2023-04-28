/*
Desc: This is my first program on c language
Author: BT
DOC: 24-04-2023
Version: 0.1v 

*/
#include <stdio.h>
#define PI 3.142

int x;
void add(int, int);

int main()
{
	int y;
	y="x";
	printf("\nHello World\n");
	printf("\ny=%d",y);
	x=20;
	add(5,2);

	return 0;
}


void add(int a, int b)
{
	printf("\n%d\n",(a+b));
	printf("\nx=%d\n",x);
	// printf("\ny=%d",y);
}
