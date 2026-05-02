#include <iostream>
using namespace std;
int main()
{
	int a,b,result;
	a=5;
	b=10;
	result=a+(b++);
	cout <<"Updated value of b is " <<b <<endl;
	cout <<"Result is " <<result <<endl;
	return 0;
}
