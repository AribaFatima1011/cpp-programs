#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float R,r,Area;
	const float pi=3.14159;
	
	cout <<"Enter the outer radius of annulus:";
	cin>>R;
	
	cout<<"Enter the inner radius of annulus:";
	cin>>r;

	Area = pi*((R*R)-(r*r));
	
	cout<<"The area of annulus is " <<Area;
	

}
