#include <iostream>
using namespace std;
int main()
{
	int T1,T2,T3,T4,T5,M1,M2,M3,M4,M5;

	cout <<"RESULT SHEET" <<endl;
	cout <<"------------" <<endl;
	
	cout <<"Enter Total Marks in subject 1:";
	cin >>T1;
	cout <<"Enter Obtained Marks in subject 1:";
	cin >>M1;
	
	cout <<"Enter Total Marks in subject 2:";
	cin >>T2;
	cout <<"Enter Obtained Marks in subject 2:";
	cin >>M2;
	
	cout <<"Enter Total Marks in subject 3:";
	cin >>T3;
	cout <<"Enter Obtained Marks in subject 3:";
	cin >>M3;
	
	cout <<"Enter Total Marks in subject 4:";
	cin >>T4;
	cout <<"Enter Obtained Marks in subject 4:";
	cin >>M4;
	
	cout <<"Enter Total Marks in subject 5:";
	cin >>T5;
	cout <<"Enter Obtained Marks in subject 5:";
	cin >>M5;
	
	float total_marks;
	total_marks=T1+T2+T3+T4+T5;
	cout <<"Total Marks are " <<total_marks <<endl;
	
	float obtained_marks;
	obtained_marks=M1+M2+M3+M4+M5;
	cout <<"Your Obtained Marks are " <<obtained_marks <<endl;
	
	float percentage;
	percentage=(obtained_marks/total_marks) * 100;
	cout <<"Your percentage is " <<percentage <<endl;
	return 0;
}
