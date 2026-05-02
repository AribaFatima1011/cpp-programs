#include <iostream>
using namespace std;
int main ()
{
	int a,b,c,d,e;
	cout <<"Enter five integers:";
	cin >>a >>b >>c >>d >>e;
	//for largest integer
	if (a>b && a>c && a>d && a>e)
	cout <<"Largest integer is " <<a <<endl;
	else if (b>a && b>c && b>d && b>e)
	cout <<"Largest integer is " <<b <<endl;
	else if (c>a && c>b && c>d && c>e)
	cout <<"Largest integer is " <<c <<endl;
	else if (d>a && d>b && d>c && d>e)
	cout <<"Largest integer is " <<d <<endl;
	else 
	cout <<"Largest integer is " <<e <<endl;
	//for smallest integer
	if (a<b && a<c && a<d && a<e)
	cout <<"Smallest integer is " <<a <<endl;
	else if (b<a && b<c && b<d && b<e)
	cout <<"Smallest integer is " <<b <<endl;
	else if (c<a && c<b && c<d && c<e)
	cout <<"Smallest integer is " <<c <<endl;
	else if (d<a && d<b && d<c && d<e)
	cout <<"Smallest integer is " <<d <<endl;
    else 
	cout <<"Smallest integer is " <<e <<endl;
	return 0;
}
