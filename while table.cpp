#include <iostream>
using namespace std;
int main()
{
	int n,x;
	cout <<"Enter the number:";
	cin>>n;
	x=1;
	cout <<"Table of " <<n <<" is:" <<endl;
	
	while(x<=10){
	cout <<n <<" * " <<x <<" = " <<n*x <<endl;
	x++;
}
return 0;
}
