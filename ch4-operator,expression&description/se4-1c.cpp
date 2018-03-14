#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main (void){		//begining of main block
	int a=32,b=5;		//declaring a and b are integers and a is equal to 32, b is equal to 5
	a*=2;				//a=a*2
	cout << "a=" << a << endl;		//print a
	a%=b;				//a=a%b
	cout << "a=" << a << endl;		//print a
	cout << "b=" << b << endl;		//print b
	system("pause");	//pause the program
	return 0;			//return integer 0
}						//end of main block
