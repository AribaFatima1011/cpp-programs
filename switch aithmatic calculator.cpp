#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout <<"Enter two values:";
	cin >>a >>b;
	
	char ch;
	cout <<"Enter  operator:";
	cin >>ch;
	
	switch(ch)
	{
	case '+':
    	cout <<a+b <<endl;
	    break;
	case '-':
	    cout <<a-b <<endl;
	    break;
	case '*':
    	cout <<a*b <<endl;
	    break;
	case '/':
    	cout <<a/b <<endl;
	    break;
	default:
		cout <<"Its out of my scope."; 
		break;
	}
	return 0;
	
	
}
