#include <stdio.h>
#include <stdlib.h>

int main()
{

	int *ptr = NULL;
	int *temp = NULL;
	int n, it;
	printf("\nEnter the value of n ");
	scanf("%d", &n);
	ptr = (int *)malloc(n*sizeof(int));
	temp = ptr;
	printf("\nEnter %d value of array\n",n);
	for(it = 0; it < n; it++,ptr++)
		scanf("%d", ptr);
	ptr  = temp;

/*	*ptr = 10;
	ptr++;
	*ptr = 20;
	ptr++;
	*ptr = 30;
	//ptr--;
	//ptr--;
	ptr = temp;
	printf("\n%d", *ptr);
	ptr++;
	printf("\n%d", *ptr);
	ptr++;
	printf("\n%d",*ptr);*/

	printf("\n Values of Array \n");
	for(it = 0; it < n; it++,ptr++)
		printf("%d\t", *ptr);
	ptr = temp;
	free(ptr);
printf("\n\n");
	return 0;
}
