#include <iostream>
using namespace std;
int main()
{
	float n,sum,avg,min,max;
	int count;
	cout <<"Enter number:";
	cin >>n;
	max=n;
	min=n;
	sum=0;
	count=0;
	
	while(n>0)
	{
		sum=sum+n;
		count++;
		cout<<n <<endl;
	
		if(n>max)
		max=n;
		else if(n<min)
		min=n;
		cin >>n;
	
	}
	avg=sum/count;
	cout <<"Average is " <<avg <<endl;
	cout <<"Maximum number is " <<max <<endl;
	cout <<"Minimum number is " <<min <<endl;
	return 0;
}
