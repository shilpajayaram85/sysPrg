/*
 structure padding
 2001 - 3000  page
 2974 - up to this it is occupied
2975 - 2978 e_id
2979 - 2999 e_name
3000 - skipped and it cant be used by any other variables
3001 - 4000  next page
	
3001 - 3004 e_sal


now even if structure requires 28 bytes the size will be 29 byte known as structure padding.


how to avoid structure padding:

define all numeric values in the beginning

we cant avoid 100% but we can reduce

2974
2975 - 2978 - e_id
2979 - 2982 - e_sal
2983 - 3000 -17 e_name
3001 - 3003 - 3 e_name


*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct employee
{
	int e_id;
	float e_sal;
	char e_name[20];
	
};
typedef struct employee EMP;
void dispDetails(EMP[] );

void getDetails(EMP *);


int main()
{
	EMP e1, e2;
	int i;
	/*e1.e_id = 101;
	e1.e_sal = 10002.25;
	strcpy(e1.e_name, "shilpa");*/

	/*printf("\n Enter the Details of employee\n");
	printf("\nName: ");
	scanf("%s", e1.e_name);
	printf("\nID:");
	scanf("%d", &e1.e_id);
	printf("\nSalary:");
	scanf("%f", &e1.e_sal);*/

	/*getDetails(&e1);
	getDetails(&e2);

	dispDetails(e1);
	dispDetails(e2);*/
	
	EMP e[5];
	//for( i = 0; i<5; i++)
		getDetails(e);
    //for(i = 0; i < 5; i++)
		dispDetails(e);
	/*printf("\n**********Employee Details**********\n");
	printf("\nName: %s", e1.e_name);
	printf("\nID: %d", e1.e_id);
	printf("\nSalary: %f",e1.e_sal);

	e2 = e1;
	printf("\n**********Employee Details**********\n");
	printf("\nName: %s", e2.e_name);
	printf("\nID: %d", e2.e_id);
	printf("\nSalary: %f",e2.e_sal);*/

	return EXIT_SUCCESS;
}

void getDetails(EMP *e)
{	
	int i;
	for(i = 0; i< 5; i++)
	{
	printf("\n Enter the Details of employee\n");
	printf("\nName: ");
	scanf("%s", e[i]->e_name);
	printf("\nID:");
	scanf("%d", &e[i]->e_id);
	printf("\nSalary:");
	scanf("%f", &e[i]->e_sal);
	}


}

void dispDetails(EMP e[])
{
	int i;
	
	printf("\n**********Employee Details**********\n");
	for( i = 0; i <5; i++)
	{
	printf("\nName: %s", e[i].e_name);
	printf("\nID: %d", e[i].e_id);
	printf("\nSalary: %f",e[i].e_sal);
	printf("\n===================================\n");

}
