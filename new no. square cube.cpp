#include <iostream>
using namespace std;
int main() 
{
	cout <<"Number\tSquare\tCube\n";
	int num1=1,num2=2,num3=3,num4=4,num5=5,sq,cube;
	int sq1=num1*num1;
	int sq2=num2*num2;
	int sq3=num3*num3;
	int sq4=num4*num4;
	int sq5=num5*num5;
	
	int cube1=num1*num1*num1;
	int cube2=num2*num2*num2;
	int cube3=num3*num3*num3;
    int cube4=num4*num4*num4;
    int cube5=num5*num5*num5;

	cout <<num1 <<"\t" <<sq1 <<"\t" <<cube1 <<"\n";
	cout <<num2 <<"\t" <<sq2 <<"\t" <<cube2 <<"\n";
	cout <<num3 <<"\t" <<sq3 <<"\t" <<cube3 <<"\n";
	cout <<num4 <<"\t" <<sq4 <<"\t" <<cube4 <<"\n";
	cout <<num5 <<"\t" <<sq5 <<"\t" <<cube5 <<"\n";
	return 0;
}
