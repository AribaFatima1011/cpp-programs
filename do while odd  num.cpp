#include <iostream>
using namespace std;
int main()
{
	
	int x,MINnum,MAXnum;
	cout <<"Enter starting number:";
	cin >>MINnum;
	cout <<"Enter ending number:";
	cin >>MAXnum;
	x=MINnum;
	do
	{
		if(x%2!=0)
		cout <<x <<endl;
		x++;
	}
	while(x<=MAXnum);
	
    return 0;
}
