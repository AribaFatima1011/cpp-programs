#include <iostream>
using namespace std;
int main()
{
	int x,y,quotient,remainder;
	
	cout <<"Enter dividend:";
	cin >>x;
	
	cout <<"Enter divisor:";
	cin >>y;
	
	quotient=x/y;
	remainder=x%y;
	
	cout <<"Quotient is " <<quotient <<endl;
	cout <<"Remainder is " <<remainder <<endl;
	return 0;
	
}
