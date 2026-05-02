#include <iostream>
using namespace std;

	int linearSearch(int arr[] , int n , int key){
		for(int i=0;i<n;i++)
		{
			if(arr[i]==key)
			{
			return i;
	    	}

		}
			return -1;
    }
int main()
{
	int n;
	cout <<"Enter the number of values you wanna save in array:";
	cin >>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout <<"Enter value:";
		cin >>arr[i];
	}
	
	int key;
	cout <<"Enter the key value which you want to search:";
	cin >>key;
	int result=linearSearch(arr,n,key);
	cout <<"The searching value's index is " <<result;
	return 0;
	
}

