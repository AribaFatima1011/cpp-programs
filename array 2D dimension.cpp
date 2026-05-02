#include <iostream>
using namespace std;
int main()
{
	int R=2;
	int C=4;
	int arr[R][C];
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cout <<"Enter integer:";
			cin >>arr[i][j];
		}
	}
	
	cout <<"The integers in arranged form(2 rows and 4 coulmns) is " <<endl;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cout <<arr[i][j] <<" ";
		}
		cout <<endl;
	}
	return 0;
}
