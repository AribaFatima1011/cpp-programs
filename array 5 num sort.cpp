#include <iostream>
using namespace std;
int main()
{
	int n=5;
	int arr[n]={23,14,78,56,12};
	
		cout <<"The unsorted array is ";
	for(int i=0;i<n;i++)
	{
    	cout <<arr[i] <<" ";
    }
    cout<<endl;
	
	int count=1;
	while(count<n)
	{
		for(int i=0;i<n-count;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		count++;
	}
	

	
	cout<<"The sorted array is ";
	 
	for(int i=0;i<n;i++)
	{
    	cout <<arr[i] <<" ";
    } 
    return 0;
	
	

	

}
