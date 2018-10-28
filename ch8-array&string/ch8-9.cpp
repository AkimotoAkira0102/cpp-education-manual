#include<iostream>		//include iostream files
#include<cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

void func(int);

int main(void){			//begining of main block
	int a = 13;
	cout << "In main(), a = " << a << ", address = " << &a << endl;
	func(a);
	system("pause");	//pause the program
	return 0;
}

void func(int a){		//¦Û­q¨ç¼Æfunc() 
	cout << "In func(), a = " << a << ",address = " << &a  << endl;
}
