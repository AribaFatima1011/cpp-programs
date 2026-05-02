#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout <<"Enter character:";
	cin >>ch;
	switch(ch)
	{
	case 'A':
	case'a':
		cout <<ch <<" is vowel."; 
		break;
	case 'E':
	case'e':
		cout <<ch <<" is vowel.";
		break;
	case 'I':
	case'i':
		cout <<ch <<" is vowel."; 
		break;
	case 'O':
	case'o':
		cout <<ch <<" is vowel."; 
		break;
	case 'U':
	case'u':
		cout <<ch <<" is vowel."; 
		break;
	default:
			cout <<ch <<" is consonant.";
	}
	
	return 0;
}
