#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace files

int main (void){		//begining of main block
	int i = 2147483647;		//declaring i is a integer and is equal to 2147483647
	
	cout << "i=" << i << endl;		//print i
	cout << "i+1=" << i+1 << endl;	//let i overflow
	cout << "i+2=" << i+2 << endl;
	system ("pause");	//pause the program
	return 0;			//return integer 0			
}						//end of main block
