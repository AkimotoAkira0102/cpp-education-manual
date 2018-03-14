#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int a=5,b=3;			//decclaring a and b are integer and a is equal to 5, b is equal to 3
	int num;				//declaring num is a integer
//a	
	cout << "(a) num=(a++)+b" << endl;
	num=(a++)+b;
	cout << "num=" << num << ",a=" << a << ",b=" << b << endl;
//b
	cout << "(b) num=(++a)+b" << endl;
	num=(++a)+b;
	cout << "num=" << num << ",a=" << a << ",b=" << b << endl;
//c
	cout << "(c) num=(a++)+(b++)" <<endl;
	num=(a++)+(b++);
	cout << "num=" << num << ",a=" << a << ",b=" << b << endl;
//d
	cout << "(d) num=(++a)+(++b)" << endl;
	num=(++a)+(++b);
	cout << "num=" << num << ",a=" << a << ",b=" << b << endl;
//e
	cout << "(e) a+=a+(b++)" << endl;
	a+=a+(b++);
	cout << "num=" << num << ",a=" << a << ",b=" << b << endl;
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
