#include <iostream>
using namespace std;
int main() {
	double F , C;
	cout <<"Enter temperature in farenhite:";
	cin >>F;
	
	//temperature in celsius
	C =(F - 32) * 5 / 9;
	cout <<F <<" degrees farenhite temperature is equal to " <<C <<" degrees celcius temperature.";
	return 0;
} 
