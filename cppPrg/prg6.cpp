
#include<iostream>
#include<string>
using namespace std;
template<class T>T smallest (T arr[], int cap)
{
	T min = arr[0];
	int i;
	for(i = 1; i < cap; i++)
	{
		if(arr[i]<min)
			min = arr[i];
	}
	return min;

}
int main()
{
	int arr1[] = {3, 6, 2, 9, 1, 13};
	
 	float arr2[] = {3.4,5.6,7.8,1.2};

	string arr3[] = {"shilpa", "raghu", "vivan","kanav"};
	cout<<"Min(int): "<<smallest(arr1, sizeof(arr1)/sizeof(arr1[0]))<<endl;
	cout<<"Min(float): "<<smallest(arr2, sizeof(arr2)/sizeof(arr2[0]))<<endl;
	cout<<"Min(string): "<<smallest(arr3, sizeof(arr3)/sizeof(arr3[0]))<<endl;
	

	

	return 0;
}

