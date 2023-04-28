#include <myheader.h>

int addFunc(int x, int y)
{
	int ret=0;

	ret = x+y;

	return ret;   //return (x+y);
}

int subFunc(int x, int y)
{
	int ret=0;

	ret = x-y;

	return ret;   //return (x+y);
}

int division(int x, int y)
{
	int ret=0;

	if(y == 0)
	{
		return 0;
	}
	ret = x/y;

	return ret;   //return (x+y);
}