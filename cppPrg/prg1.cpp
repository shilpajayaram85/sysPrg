#include<iostream>
using namespace std;

class employee
{
		
	private:
	  int e_id;
	  char name[20];
	  float sal;
	public:
		void getDetails();
		void dispDetails();
	friend int compSaL(employee, empolyee );
};

void employee :: getDetails()
{

	cout<<"Enter Name: ";
	cin>>name;
	cout<<"ID: ";
	cin>>e_id;
	cout<<"Salary: ";
	cin>>sal;
}
void employee :: dispDetails()
{
	cout<<"Employee Details"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"ID : "<<e_id<<endl;
	cout<<"Salary: "<<sal<<endl;
}
int compSaL(employee e1, employee e2)
{
	if(e1.sal > e2.sal)
		return 1;
	else
	 	return 0;
}
	

int main()
{
	employee e1,e2;
	
	e1.getDetails();
	e1.dispDetails();
	e2.getDetails();
	e2.dispDetails();
	if(compSaL(e1,e2))
		cout<<"Employee 1 is having greater salary"<<endl;
	else
		cout<<"Employee 2 is having greater salary"<<endl;
	return 0;
}
