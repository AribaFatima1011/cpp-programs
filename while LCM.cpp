#include <iostream>
using namespace std;
int main()
{
	int a,b,maxnum;
	cout <<"Enter two numbers i will show you there LCM:";
	cin >>a >>b;
	maxnum=(a>b)?a:b;
	while(true)
	{
		if(maxnum%a==0  && maxnum%b==0)
		{
		cout <<"LCM is " <<maxnum;
		break;
    	}
	maxnum++;
	    
	}
	return 0;
}
