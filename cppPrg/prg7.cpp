
#include<iostream>
#include<string>
using namespace std;
template<class A, class B, class C>void myEcho (A a, B b, C c)
{
	cout<<c<<" ";
	cout<<b<<" ";
	cout<<a<<endl;
}
int main()
{
	
 	myEcho("hello",10,2.3);
	myEcho(10,"hello",33.4);
	myEcho(99.2,23,"hello");
	

	

	return 0;
}

