#include <iostream>
using namespace std;
int main()
{
	int n=5;
	int arr[n];
	cout <<"Enter 5 numbers:";
	for (int i=0;i<n;i++)
	{
		cin >>arr[i];
	}
	cout <<"The actual  order of numbers is  ";
	for (int i=0;i<n;i++)
	{
		cout<<arr[i] <<" " <<endl;
		
	}
	
	
	cout <<"Reverse order is ";
	for(int i=4;i>=0;i--)
	{
		cout <<arr[i] <<" ";
	}
	
	return 0;
}
