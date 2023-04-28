/*

loop 
1. counter
2. sts to be executed
3. initialization
4. condition


1. entry controlled -> while, for
2. exit controlled -> do..while

syntax:
   while(cond)
   {
		block of sts
   } 


   do
   {
		block of sts
   }while(cond);


   for(init sec; cond sec;counter sec)
   {
		block of sts
   }

*/


#include <stdio.h>

int main()
{
	int i,j;

	i = 11;
	char ch='A';

	/*while(i<=10)
	{
		printf("\ni=%d",i);
		i++;

	}

	*/

	/*do
	{
		printf("\ni=%d",i);
		i++;
	}while(i<=10);

	*/
	i=10;
	for(i=1;i<=26;i++, ch++)
	{
		printf("\nch=%c = %d",ch, ch);
		
		
	}

	printf("\nPrg ends\n");
	return 0;
}