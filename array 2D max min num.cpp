#include <iostream>
using namespace std;
int main()
{
	int arr[2][4]={{12,14,16,9},{7,8,90,87}};
	           
    int maxnum,minnum;	           
   maxnum=minnum=arr[0][0];
   for(int i=0;i<2;i++)
   {
   	for(int j=0;j<4;j++)
   	{
   		if(arr[i][j]>maxnum)
   		{
   			maxnum=arr[i][j];
		}
		 if(arr[i][j]<minnum)
		 {
		 	minnum=arr[i][j];
		}   
	}
   }
   cout <<"Maximum number is " <<maxnum <<endl;
   cout <<"Minimum number  is " <<minnum <<endl;
   return 0;
}
