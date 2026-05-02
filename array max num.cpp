#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n=10;
	int arr[n];
	cout <<"Enter ten numbers and i will show you their maximum number" <<endl;
	for(int i=0;i<n;i++)
	{
		cin >>arr[i];
		cout <<endl;
	}
	int maxnum=INT_MIN;
	for(int i=0;i<n;i++)
	{
	
    	if(arr[i]>maxnum)
    	{
	    	maxnum=arr[i];
	    }
	}
	cout <<"Maximum number is " <<maxnum;
	return 0;

}
