#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int *a;
	a = new int;
	*a = 8;
	cout << "*a = " << *a << endl;
	cout << *a << "*" << *a << " = " << (*a)*(*a) << endl;
	delete a;
	cout << "*a = " << *a << endl;
	a = NULL;
	system("pause");	//pause the program
	return 0;
}
