#include <iostream>
using namespace std;
int main () {
	int a , b , c;
	cout <<"Enter age in years:";
	cin >>a;
	
	//age in days
	b = a * 365;
	cout <<"Age in days is " <<b <<" days." <<endl;
	
	//age in months
	c = a * 12;
	cout <<"Age in months is " <<c <<" months." <<endl;
	return 0;
}
