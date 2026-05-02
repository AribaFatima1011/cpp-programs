#include <iostream>
using namespace std;
int main()
{
	int speed;
	cout<<"Enter the  speed of vehicle(in km):";
	cin>>speed;
	
    if(speed>=0 && speed<=20)
	{
		cout <<"slow";
	}
	
	else if(speed>=21 && speed<=60)
	{
		cout <<"Moderate";
	}
	else if(speed>=6761)
	{
		cout <<"Fast";
	}
	else
	{
		cout <<"Invalid speed";
	}
	return 0;
	
}
