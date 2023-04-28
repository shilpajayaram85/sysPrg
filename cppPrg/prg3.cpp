class num
{

	int *n;
 public:
	/*num(int x)
	{
	   n = new int;
	   *n =x;
	}*/
	void getValues();
	//int *mymalloc(int size);


};
/*int* num:: mymalloc(int size)
{
	void * ptr =NULL;
	ptr = new int [size];
	return ptr;
}*/

void num::getValues()
{
	int it, size;
	for(it = 0; it < 10; it++)
	{
		cout<<"How Many Elements: ";
		cin>>size;
		if(size == 0)
			free(n);

			
		
		n = mymalloc(size);




}
int main()
{
	num n1;
	n1.getValues();
	return 0;
}
