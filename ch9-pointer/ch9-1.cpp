#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int a,b=5;
	double c=3.14;
	cout << "a = "	<< a << ", sizeof(a) = " << sizeof(a);
	cout << ", address is " << &a << endl;
	cout << "b = "	<< b << ", sizeof(b) = " << sizeof(b);
	cout << ", address is " << &b << endl;
	cout << "c = "	<< c << ", sizeof(c) = " << sizeof(c);
	cout << ", address is " << &c << endl;
	system("pause");	//pause the program
	return 0;
}
