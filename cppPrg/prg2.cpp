#include<iostream>
#include<string>
using namespace std;

class recipe
{

	protected:
		string name;
		int n;
	public:
		recipe(string name, int n)
		{
			this->name = name;
			this->n =n;
		}
		virtual void dispRecipe()
		{
		cout<<"Recipe: "<<name<<endl;
		cout<<"No. of servings: "<<n<<endl;
		}
};
class MainDish : public recipe
{
	private:
		string cuisine;
		public:
		 MainDish(string name, int n, string cuisine):recipe(name,n)
		 {
		 	this->cuisine = cuisine;
		 }
	void dispRecipe()
	{
		recipe::dispRecipe();
		cout<< "Cuisine:  "<<cuisine <<endl;
	}
};

int main()
{
	MainDish m("Pasta",4, "Italian");
	m.dispRecipe();
	return 0;
}
