#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	short n=12;				//declaring n is a short integer and equal to 12
	bool b=false;			//declaring b is a bool and equal to 0
	cout << "n=" << n << ", ~n=" << ~n << endl;		//print n and n's complement
	cout << "b=" << b << ", !b=" << !b << endl;		//print b and not b
	system ("pause");		//pause the program
	return 0;				//return integer 0 
} 							//end of main block
