#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main (void){		//begining of main block
	char ch='h';		//declare ch is a character and equal to character h
	int i=ch;			//declare i is a integer and equal to h. *ch will present with integer in computer
	cout << "ch=" << ch << endl;		//print ch
	cout << "The ASCII code is " << i << endl;		//print ASCII of h
	system ("pause");	//pause the program
	return 0;			//return integer 0;
}						//end of main block
