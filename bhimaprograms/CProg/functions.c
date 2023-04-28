/*

declaration:

rdt f_name(input_vargs);

int addFunc(int,int);


define function = implementation of task


rdt f_name(dt var1, dt var2, ...)
{
	body of the fuction

	return rdt_value;
}


int addFunc(int x, int y)
{
	int ret_value;

	ret_value = x+y;

	return ret_value;
}


*/


#include <myheader.h>


int main()
{
	int a,b;
	int result=0;

	printf("\nEnter values of a and b: ");
	scanf("%d%d",&a,&b);
	result = addFunc(a,b);
	printf("\nAddition of two numbers: %d\n", result);


	return 0;
}





