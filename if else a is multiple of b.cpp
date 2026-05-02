#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout <<"Enter two integers:";
	cin >>a >>b;
	if (a%b==0)
	cout <<a  <<" is multiple of " <<b;
	else 
	cout <<a <<" is not multiple of " <<b;
	return 0;
}
