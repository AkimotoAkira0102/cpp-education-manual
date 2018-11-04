#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int square(int);		//declare function prototype

int main(void){			//begining of main block
	int (*pf)(int);
	pf = square;
	cout << "square(5) = " << (*pf)(5) << endl;
	system("pause");	//pause the program
	return 0;
}

int square(int a){
	return a*a;
}
