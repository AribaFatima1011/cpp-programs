#include <iostream>
using namespace std;
int main()
{
	int arr[5],sum;
	cout <<"Enter five numbers and i will show you their sum:";
	cin >>arr[0];
	cin >>arr[1];
	cin >>arr[2];
	cin >>arr[3];
	cin >>arr[4];
	
	sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
	cout <<"The sum of five numbers is " <<sum;
	return 0;
}
