#include<iostream>
using namespace std;

template <class A> A add(A x,A y)
{
	return x+y;
}

template <class A> A add(A x,A y, A z)
{
	return x+y+z;
}


int main()
{

	int x= 5, y=10, z=23;
	float a =22.2,b=3.4,c=2.2;
	cout<<"Sum of two integer:  "<<add(x,y)<<endl;
	cout<<"Sum of two float:  "<<add(a,b)<<endl;
	cout<<"Sum of three integer:  "<<add(x,y,z)<<endl;
	cout<<"Sum of three float:  "<<add(a,b,c)<<endl;



	return 0;
}
