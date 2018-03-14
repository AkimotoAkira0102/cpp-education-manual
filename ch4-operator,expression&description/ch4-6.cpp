#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std;

int main (void){			//degining of main block
	int a=10;				//declaring a is a integer and equal to 10
	cout << "a=" << a << endl;		//print a
	cout << "a++*2=" << a++*2 << endl;		//print a++*2. It will be 20, because a++ is executed after this line.
	cout << "a=" << a << endl;		//print a
	system ("pause");		//pause the program
	return 0;				//return integer 0 
}							//end of main block
