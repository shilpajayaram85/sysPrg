#include<iostream>
using namespace std;

template <class A> A square(A n)
{
	A res;
	res = n*n;

	return res;
}

int main()
{

	int x= 5;
	float y =22.2;
	cout<<"Square of integer:  "<<square(x)<<endl;
	cout<<"Square of float:  "<<square(y)<<endl;
	
	return 0;
}
