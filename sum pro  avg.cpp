#include <iostream>
using namespace std;

int main() {
	double a ,  b , c ,  d;
	
	cout <<"Enter first number:";
	cin >>a;
	cout <<"Enter second number:";
	cin >>b;
	cout <<"Enter third number:";
	cin >>c;
	cout  <<"Enter fourth number:";
	cin >>d;
	
	double  sum = a + b + c +  d;
	cout <<"Sum of four numbers is " <<sum <<endl;
	
	double avg = sum / 4;
	cout <<"Average of four numbers is " <<avg <<endl;
	
	double pro = a * b * c * d;
	cout <<"Product of four numbers is " <<pro <<endl;
	
	return 0;
	
}
