#include <iostream>
using namespace std;
int main()
{
	int num1,num2,sum,subtraction,product,division,modulus;
	cout <<"Enter two numbers:";
	cin >>num1;
	cin >>num2;
	
	
	sum=num1+num2;
	subtraction=num1-num2;
	product=num1*num2;
	division=num1/num2;
	modulus=num1%num2;
	
	cout <<"Sum is " <<sum <<endl;
	cout <<"Subtraction is " <<subtraction <<endl;
	cout <<"Product is " <<product <<endl;
	cout <<"Division is " <<division <<endl;
	cout <<"Modulus is " <<modulus <<endl;
	return 0;
	}
