#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of mian block
	int a=36,b=7;			//declaring a and b are integers and a is equal to 36, b is equal to 7
	cout << "a=" << a << ", b=" << b << ", a/b=" << (a/b) << endl;	//print a, b and integer a/b
	cout << "a=" << a << ", b=" << b << ", a/b=" << (float)a/b << endl;	//print a, b and float point number a/b		
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
