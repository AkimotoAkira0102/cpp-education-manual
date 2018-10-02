#include <iostream>			//include iostream files
#include <cstdlib> 			//include cstdlib files
using namespace std;		//use namespace std

void func(int,int);			//declare function prototype

int main(void){				//begining of main block
	int a = 4,b = 7;
	cout << "In main(),a = " << a << ",b = " << b << endl;
	func(a,b);
	cout << "After func(), a = " << a << ", b = " << b << endl;
	system("pause");		//pause the program
	return 0;				//return integer 0
}

void func(int a,int b){
	a+=10;
	b+=10;
	cout << "In func(), a = " << a << ", b = " << b << endl;
	return;
}
