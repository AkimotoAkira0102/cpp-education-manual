#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

void address(int *);	//declare function prototype

int main(void){			//begining of main block
	int a = 12;
	int *ptr = &a;
	address(&a);
	address(ptr);
	system("pause");	//pause the program
	return 0;
}

void address(int *p1){
	cout << "In ddress " << p1 << ", stored variable's content is " << *p1 << endl;
	return;
}
