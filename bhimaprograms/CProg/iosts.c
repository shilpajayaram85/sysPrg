#include <stdio.h>

int main()
{

	int x,y;
	int z;
	float f;
	char ch;
	printf("\nEnter the values of x and y: ");
	scanf("%d%d",&x,&y);
	z = x+y;

	printf("\n%d + %d = %d\n",x,y,z);
	printf("\nEnter float value f: ");
	scanf("%f",&f);
	printf("\nValue: %f",f);
	printf("\nEnter a single char: ");
	scanf(" ");
	scanf("%c",&ch);
	printf("\nValue Char: %c = Ascii value=%d",ch, ch);
}