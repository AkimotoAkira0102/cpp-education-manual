#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int a=75,b=150;			//declaring a and b are integers and a is equal to 75, b is equal to 150
	a/=6;					//a=a/6
	b%=9;					//b=b%9
	cout << "a=" << a << endl;		//print a after a/6
	cout << "b=" << b << endl;		//print b after b%9
	system ("pause");		//pause the program
	return 0;				//return integer 0		
} 							//end of main block
