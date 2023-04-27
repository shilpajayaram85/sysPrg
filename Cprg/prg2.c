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
	EMP e[5];
	int i;
	getDetails(e);
	dispDetails(e);
	printf("\n\n");
	return EXIT_SUCCESS;
}

void getDetails(EMP *e)
{	
	int i;
	for(i = 0; i< 5; i++)
	{
	printf("\n Enter the Details of employee\n");
	printf("\nName: ");
	scanf("%s", e[i].e_name);
	printf("\nID:");
	scanf("%d", &e[i].e_id);
	printf("\nSalary:");
	scanf("%f", &e[i].e_sal);
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

}
