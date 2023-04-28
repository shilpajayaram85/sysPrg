/*

malloc, calloc and realloc

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*int arr[3] = {10,20,30};

	printf("\n%d %d %d",arr[0],arr[1],arr[2]);
	*/

	int *ptr=NULL;
	int *temp=NULL;
	int n,i;
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	ptr = (int *)malloc(n*sizeof(int));
	if(ptr == NULL)
		exit(EXIT_FAILURE);
	temp = ptr;
	
	printf("\nEnter %d values of array\n",n);
	for(i=0;i<n;i++,ptr++)
		scanf("%d",ptr);

	ptr =  temp;

	printf("\nvalues of array\n");
	for(i=0;i<n;i++,ptr++)
		printf("%d\t",*ptr);

	free(temp);
	/*
	*ptr = 10;
	ptr++;
	*ptr = 20;
	ptr++;
	*ptr = 30;

	ptr =  temp;
	printf("\n%d",*ptr);
	ptr++;
	printf("\n%d",*ptr);
	ptr++;
	printf("\n%d",*ptr);
	*/
	
	/*
	printf("\n%d",*ptr);
	ptr--;
	printf("\n%d",*ptr);
	ptr--;
	printf("\n%d",*ptr);
	// ptr++
	// printf("\n%d",*ptr);
	// printf("\n%d",*ptr);
	*/


	printf("\n\n");

	return 0;
}