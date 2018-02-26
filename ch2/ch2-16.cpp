#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int a,b;				//announce integer a and b
	a = 2;					//integer a is equal to 2
	b = 6;					//integer b is equal to 6
	cout << "a = " << a << endl;		//print a
	cout << "b = " << b << endl;		//print b
	cout << "a + b = " << a+b << endl;		 //print calculation of a add b
	cout << "a - b = " << a-b << endl;		//print calculation of a subtract b
	cout << "b - a = " << b-a << endl;		//print calculation of b subtract a
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block

