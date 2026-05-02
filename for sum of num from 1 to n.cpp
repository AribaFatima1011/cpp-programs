#include <iostream>
using namespace std;
int main()
{
	int n,sum;
	cout <<"Enter a number:";
	cin >>n;
	sum=0;
	for(int c=1;c<=n;c++)
	{
		sum=sum+c;
		
	}
	cout <<"Sum of numbers from 1 to " <<n <<" is " <<sum;
	return 0;
}
