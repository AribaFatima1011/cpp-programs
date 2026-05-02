#include <iostream>
using namespace std;

	
int binarySearch(int arr[],int n,int key)
{

        int s=0;
		int  e=n-1;
		while(s<=e)
  		{
	     	int mid=(s+e)/2;
	    	if(arr[mid]==key)
    		{
	    		return mid;
   		   }
    		else if(arr[mid]>key)
    		{
	    		e=mid-1;
    	   }
	    	else
		   {
        		s=mid+1;
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
	cout <<"Enter key value which you want to search:";
	cin >>key;
	
	int result=binarySearch(arr,n,key);
	if(result==-1)
	{
		cout <<"Key value is not present.";
	}
	else
	cout <<"The index of key value is " <<result;
	return 0;
}
	

