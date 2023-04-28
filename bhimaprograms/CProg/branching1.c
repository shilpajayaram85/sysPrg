#include <stdio.h>

int main()
{
	int val=0;
	char ch[20];

	printf("\nEnter a value between(1-5): ");
	//scanf("%c",&ch);
	scanf("%s",ch);

	/*
	if(val>0 && val <=100)
		printf("\nIn the range of 0-100");
	else if(val>100 && val <=200)
		printf("\nIn the range of 101-200");
	else if(val>200 && val <=500)
		printf("\nIn the range of 201-500");
	else if(val>500 && val <=1000)
		printf("\nIn the range of 501-1000");
	else
		printf("\nOut of range\n");
	

	*/

	switch(ch)
	{
		case "1":
				printf("\nPressed 1\n");
				break;
		case "2":
				printf("\nPressed 2\n");
				break;
		case "3":
				printf("\nPressed 3\n");
				break;
		case "4":
				printf("\nPressed 4\n");
				break;
		case "5":
				printf("\nPressed 5\n");
				break;
		default:
				printf("\nWrong choice\n");

	}
	printf("\nProg Ends\n");
	
}