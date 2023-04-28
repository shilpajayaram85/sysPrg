#include <iostream>
using namespace std;

template <class A, class B>B add(A &a, B& b)
{
	B res;
	res = a+b;

	return res;
}

int main()
{
	int x=10,y=20;
	float m=22.25,n=33.5;

	// cout<<"Addition of integers: "<<add(x,y)<<endl;
	// cout<<"Addition of floats: "<<add(m,n)<<endl;
	cout<<"Addition of int and float: "<<add(x,y)<<endl;
	
	return 0;
}