#include <stdio.h>
int main(void)
{  	
	int number = 0;                 
  	int *pointer = NULL;              
	number = 10;  
	pointer = &number;              
	printf("\npointer's size: %d bytes", sizeof(pointer)); 
	return 0;
}
