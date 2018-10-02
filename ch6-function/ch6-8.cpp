#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;

void func(void);

int main(void){
	func();
	func();
	func();
	system("pause");		//pause the program
	return 0;
}

void func(void){
	static int a = 10;
	cout << "In func(), a = " << a << endl;
	a += 10;
	return;
}
