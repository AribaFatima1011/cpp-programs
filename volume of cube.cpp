#include <iostream>
using namespace std;
int main() 
{
	int length,width,height,V;
	cout <<"Enter length:";
	cin >>length;
	
	cout <<"Enter width:";
	cin >>width;
	
	cout <<"Enter height:";
	cin >>height;
	
	V = length * width * height;
	cout <<"Volume of cube is " <<V <<endl;
	return 0;
}
