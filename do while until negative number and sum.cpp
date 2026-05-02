#include <iostream>
using namespace std;
int main()
{
	int num,count;
	float sum,avg;
	sum=0.0;
	count=0;
	do
	{
	 cout <<"Enter a number:";
	 cin >>num;
	    if(num>=0)
	        {
	        	cout <<num <<endl;
	        	sum+=num;
	        	count=count+1;
	        }
	
	}
	while(num>=0);
	avg=sum/count;
	cout <<"Sum is " <<sum <<endl;
	cout <<"Average is " <<avg;
	return 0;
}
