/*

e_names[2][4]
bhima1
bhima2

2000 2001 2003 2003 2004 2005 2006 2007 2007 2008 2009
b     h     i   m    a    1    \0   b    h    i    m     a   2  \0

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char e_names[10][100];
	int it;

	for(it=0;it<10;it++)
	{
		printf("\nEnter %d Employee's  Name: ",(it+1));
		scanf("%s",e_names[it]);
	}

	printf("\nEmployee Names are\n");

	for(it=0;it<10;it++)
	{
		printf("%s\n",e_names[it]);
	}

	return 0;
}