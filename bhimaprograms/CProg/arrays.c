/*

decalaration:
syntax:
dt name_array[size of array];

float math_marks[4]; => 

index value

math_marks[1] = > 2nd value which can math marks of m2

in array the indexing starts by zeroth onwards and ends up by size of array -1

at the time of decalartion
float math_marks[4]; => we are having 4 values to be stored

when we are accessing it then

by using index value 

math_marks[0] = 88.99; => this will store 1 value in the list => idetified by an index value ie.
0.
math_marks[1] = 77.88;
math_marks[2] = 65.89;
math_marks[3] = 87.7;

3-> index value is the last in the list (sizeof array - 1) 

char name[20];  '\0'

4 types

1. static array => size of the array is known before to the compilation
2. dynamic array => size of the array is known at run time (@execution time)
3. stretchable array
4. mutable array => size of the array is known in between compile time and link time

1. one, two, multi demnension

dt array_name[rows][cols]

1 2 3 4 5
6 7 8 9 10

int arr[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

int arr[2][5] = {1,2,3,4,5,6,7,8,9,10};


*/

#include <stdio.h>

int main()
{
	float m_marks[4] = {0,};
	float avg=0;
	int it;

	printf("\nEnter the 4 marks of maths: ");
	/*scanf("%f%f%f%f",&m_marks[0],&m_marks[1],&m_marks[2],&m_marks[3]);
	*/
	for(it=0;it<sizeof(m_marks)/sizeof(m_marks[0]);it++)
		m_marks[it] = 0.0;
	for(it=0;it<4;it++)
		scanf("%f",&m_marks[it]);
	for(it=0;it<4;it++)		
		avg += m_marks[it];

	avg = avg/4.0;
	
	printf("\nAvg marks: %f",avg);


	printf("\n\n");
	return 0;
}