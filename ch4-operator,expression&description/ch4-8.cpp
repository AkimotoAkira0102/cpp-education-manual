#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int a=100,b=15;			//declaring a and b are integer and a is equal to 100, b is equal to 15
	a-=b;					//calculate a=a-b
	cout << "After a-=b" << endl;
	cout << "a=" << a << endl;		//print a after a-=b
	cout << "b=" << b << endl;		//print b after a-=b
	system ("pause");		//pause the program
	return 0;				//reutrn integer 0 
}							//end of main block
