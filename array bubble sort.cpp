#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter number of values you wanna save in array:";
	cin >>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout <<"Enter value:";
		cin>>arr[i];
	}
	int counter=1;
	while(counter<n)
	{
		for(int i=0;i<=n-counter;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
	cout <<"The sorted array of values is ";
	for(int  i=0;i<n;i++)
	{
		cout<<arr[i] <<" ";
	}
	return 0;
}
	
