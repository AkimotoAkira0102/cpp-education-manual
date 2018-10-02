#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

void func(void);

int main(void){				//begining of main block
	auto int a = 10;
	cout << "In main(), a = " << a << endl;
	func();
	cout << "In main(), a = " << a << endl;
	system("pause");		//pause the program
}

void func(void){
	int a = 30;
	cout << "In func(), a = " << a << endl;
	return;
}
