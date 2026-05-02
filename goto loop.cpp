#include <iostream>
using namespace std;
int main()
{
	int x=1;
	loop:
	cout <<"Hello World." <<endl;
	x++;
	if(x<=5)
	goto loop;
	return 0;
}
