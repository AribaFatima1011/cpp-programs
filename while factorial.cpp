#include <iostream>
using namespace std;
int main()
{
	int n,c,f;
	cout <<"Enter  the number and i will give you it's factorial:";
	cin >>n;
	c=n;
	f=1;
	while(c>0)
	{
		f=f*c;
		c=c-1;
	}
	cout <<"Factorial of " <<n <<" is " <<f <<endl;
	return 0;
	
}
