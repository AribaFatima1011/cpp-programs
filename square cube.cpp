#include <iostream>
using namespace std;
int  main() {
	double a;
	cout <<"Enter a number:";
	cin >>a;
	
	double sq = a * a;
	cout <<"Square of number is " << sq <<" sq. units." <<endl;
	
	double cube = a * a * a;
	cout <<"Cube of number is " << cube <<" cubic units." <<endl;
	return 0;
}
