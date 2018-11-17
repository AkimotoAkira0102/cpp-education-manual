#include <iostream>		//include iostream files
#include <cstdlib> 		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int a = 10, &ref = a;
	int b = 15, *ptr;
	ptr = &b;
	cout << a << " + " << b << " = " << ref + *ptr << endl;
	system("pause");	//pause the program
	return 0;
}
