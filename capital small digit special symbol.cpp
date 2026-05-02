#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout <<"Enter a  character:";
	cin>>ch;
	
	if(ch>='A' && ch<='Z')
	cout <<ch <<" is capital letter" <<endl;
	
	else if(ch>='a' && ch<='z')
	cout <<ch <<" is small letter" <<endl;
	
    else if(ch>'0' && ch<='9')
	cout <<ch <<" is digit" <<endl;
	
    else
	cout <<ch <<" is special symbol" <<endl;
	
	return 0;
}
