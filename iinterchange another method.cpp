 #include <iostream>
using namespace std;
int main()
{
	int num1,num2,temp;
	
	cout <<"x=";
	cin >>num1;
	
	cout <<"y=";
	cin >>num2;
    
    temp=num1;
    num1=num2;
    num2=temp;
	cout <<"After swapping  x=" <<num1 <<endl <<"y=" <<num2 <<endl;
	return 0;
	
}
