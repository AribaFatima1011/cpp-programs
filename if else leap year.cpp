#include <iostream>
using namespace std;
int main()
{
	int year,YEAR;
	cout <<"Enter year:";
	cin >>year;
	if (year % 400 == 0)
	{
	cout <<"It's leap year" <<endl;
    }
	else
	{
	cout <<"It's not a leap year" <<endl;
    }
	return 0;
}
