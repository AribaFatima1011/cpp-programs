#include <iostream>
using namespace std;
int main()  {
	double C , F;
	cout <<"Enter temperature in celsius:";
	cin >>C;
	
	F = 32 + (9 * C) / 5;
	cout <<"Temperature in farenhite is " <<F <<" degrees farenhite.";
	return 0;
	
}
