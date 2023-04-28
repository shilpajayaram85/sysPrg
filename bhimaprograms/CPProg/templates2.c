#include <iostream>
#include <string>
using namespace std;

template <class T>T smallest(T arr[], int cap)
{
	T min = arr[0];
	for(int i=1;i<cap;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}

	return min;
}


int main()
{
	int arr1[]={10,2,11,4,7,6,3};
	float arr2[]={10.2,22.5,11.1,4.4,77.5,66.6,3.6};
	string names[] = {"shilpa", "karthika", "zhima"};

	cout<<"Min(int): "<<smallest(arr1, sizeof(arr1)/sizeof(arr1[0]))<<endl;
	cout<<"Min(float): "<<smallest(arr2, sizeof(arr2)/sizeof(arr2[0]))<<endl;
	cout<<"Min(string): "<<smallest(names, sizeof(names)/sizeof(names[0]))<<endl;

	return 0;
}