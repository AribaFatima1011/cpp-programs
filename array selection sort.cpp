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
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
		cout<<"The sorted array of entered values is ";
	for(int i=0;i<n;i++)
	{
	cout <<arr[i] <<" ";
    }
	return 0;
	
}
