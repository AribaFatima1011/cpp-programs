#include <iostream>
using namespace std;
int main()
{
	int m,n;
	m=3;
	n=2;
	int arr[m][n]={{6,3},{7,8},{4,5}};
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout <<arr[i][j] <<"\t";
		}
		cout <<endl;
	}
	
	int sum=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum+=arr[i][j];
		}
	}
	
	cout<<"The sum of matrix is " <<sum;
	
	return 0;
	
}
