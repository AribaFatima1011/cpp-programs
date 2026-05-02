#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n=10;
	int arr[n];
	cout <<"Enter ten numbers and i will show you their minimum number" <<endl;
	for(int i=0;i<n;i++)
	{
		cin >>arr[i];
	}
	int minnum=INT_MAX;
	for (int i=0;i<n;i++)
	{
		if(arr[i]<minnum)
		{
			minnum=arr[i];n
		}
	}
	cout  <<"Minimum number is " <<minnum;
	return 0;
}
