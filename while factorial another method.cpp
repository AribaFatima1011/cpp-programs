#include <iostream>
using namespace std;
int main()
{
	int num,f;
	cout <<"Enter a number:";
	cin >>num;
	f=1;
	while(num>0)
	{
		f=f*num;
		num--;
	}
	 cout <<"Factorial is " <<f;
	 return 0;
	
}
