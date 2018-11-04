#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

void add10(int *);		//declare function prototype

int main(void){			//begining of main block
	int a = 5;
	cout << "Before call add10(), a = "	<< a << endl;
	add10(&a);
	cout << "After call add10(), a = "	<< a << endl;
	system("pause");	//pause the program
	return 0;
}

void add10(int *ptr){
	*ptr += 10;
	return;
}
