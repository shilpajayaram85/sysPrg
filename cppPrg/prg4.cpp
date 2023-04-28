#include<iostream>
using namespace std;

template <class A, class B, class C> C add(A &a, B &b, C &c)
{
	C res;
	res = a+b+c;

	return res;
}

int main()
{
	int x=10;
	float m=25.22;
	double l = 99.2;
	cout<<"Addition of integer float and double: "<<add(x, m, l)<<endl;
	
	return 0;
}
