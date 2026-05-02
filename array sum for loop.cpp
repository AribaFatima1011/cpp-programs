#include <iostream>
using namespace std;
int main()
{
	int arr[5],sum;
	sum=0;
	cout <<"Enter numbers and i wil show you their sum:";
	for(int i=0;i<5;i++)
	{
		cin >>arr[i];
     	sum = sum + arr[i];
   }
   cout <<"The sum of numbers is " <<sum;
   return 0;
}
