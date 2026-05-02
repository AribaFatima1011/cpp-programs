#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter number of persons whose age will be entered:";
	cin >>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout <<"Enter age of person:";
		cin >>arr[i];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=50 && arr[i]<=60)
		{
			count+=1;
		}
	}
	cout <<"The number of persons in age group 50 to 60 is " <<count;
	return 0;
}
