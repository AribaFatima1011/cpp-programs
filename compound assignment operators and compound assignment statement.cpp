#include <iostream>
using namespace std;
int main() 
{
	int a,b,c,d;
	a=b=c=d=12;
	cout <<"Initially a=" <<a <<" b=" <<b  <<" c=" <<c <<" d=" <<d <<endl;
	a+=4;
	cout <<"After a+=4 a becomes " <<a <<endl;
	
	b-=2;
	cout <<"After b-=2 b becomes " <<b  <<endl;
	
	c/=4;
	cout <<"After c/=4 c becomes " <<c <<endl;
	
	d%=6;
    cout <<"After d%=6 d becomes " <<d <<endl;
    
    return 0;
}
