/*

2001 - 3000

2974
2975-2978 - e_id
2979-2999 - e_name
3000 - skipped and it can't be used by any other variables
3001 - 4000
3001 - 3004 - e_sal


2974
2975-2978 - e_id
2979-2982 - e_sal
2983 - 3000 - 17 e_name
3001 - 3003 - 3 e_name

*/

#include <stdio.h>
#include <string.h>

struct employee
{
	int e_id;
	float e_sal;
	char e_name[20];
	
};


typedef struct employee EMP;

void getDetails(EMP *);
void dispDetails(EMP);


int main()
{
	struct employee e[10];
	int it;

	getDetails(e);

		
	for(it=0;it<5;it++)
	{
		dispDetails(e[it]);
	}
	
	
	printf("\n\n");

	return 0;

}

void getDetails(EMP *e)
{
	int it;

	printf("\nEnter the Details of employee\n");
	for(it=0;it<5;it++){
		printf("\nName: ");
		scanf("%s",e[it].e_name);
		printf("\nID: ");
		scanf("%d",&e[it].e_id);
		printf("\nSalary: ");
		scanf("%f",&e[it].e_sal);
	}
}

void dispDetails(EMP e)
{
	printf("\nEmployee Details are\n");
	printf("\nName: %s",e.e_name);
	printf("\nID: %d",e.e_id);
	printf("\nSalary: %f",e.e_sal);
	printf("\n==========================\n");
}


