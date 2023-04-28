
/*

strings => collection of character ended with a null char at the end

char str[10] = "Hello";

2000 2001 2002 2003 2004 2005 2006 2007 2008 2009 2010
'H'   'e'  'l'  'l'  'o' '\0'

strcpy, strcmp, strtok, strstr

*/


#include <stdio.h>
#include <string.h>

int main()
{

	char s1[20], s2[20];
	char *tokens;
	int ret=0;

	printf("\nEnter 1 string: ");
	scanf("%s",s1);
	/*
	printf("\nEnter sub string: ");
	scanf("%s",s2);
	*/
	/*
	ret = strcmp(s1,s2);

	printf("\nRet value: %d",ret);

	if(ret == 0)
		printf("both are equal");
	else if(ret < 0)
		printf("\nString 1 is less than string 2");
	else
		printf("\nString 1 is greater than string 2");
	*/
	/*
	strcpy(s2,s1);
	printf("\ns2 = %s",s2);
	*/
	/*
	retVal = strstr(s1,s2);
	if(retVal == NULL)
		printf("\nSub string not found");
	else
		printf("\nSub String: %s",retVal);
	*/

	tokens = strtok(s1,"|");
	if(tokens != NULL)
		printf("\nToken 1 : %s", tokens);
	
	tokens = strtok(NULL,"|");
	if(tokens != NULL)
		printf("\nToken 2 : %s", tokens);
	
	tokens = strtok(NULL,"|");
	if(tokens != NULL)
		printf("\nToken 3 : %s", tokens);


	printf("\n\n");
	return 0;
}