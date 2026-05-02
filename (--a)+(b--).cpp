#include <iostream>
using namespace std;
int main()
{
	int a,b,result;
	a=5;
	b=10;
	result=(--a)+(b--);
	cout <<"Updated value of a is " <<a <<endl;
	cout <<"Updated value of  b is " <<b <<endl;
	cout <<"Result of expression is " <<result <<endl;

	return 0;
	
}
