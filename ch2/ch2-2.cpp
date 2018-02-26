#include <iostream.h>		//include iostream.h files
#include <cstdlib.h>			//include cstdlib.h files

int main (void){			//begining of main block
	int num;				//announce integer num
	num = 6;				//num is equal to 6
	cout << "I have " << num << " apples." << endl;				//print string
	cout <<	"You have" << num << " apples, too." << endl;		//print string
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block

/*
Can't compile this progeam, because iostream.h & cstdlib.h isn't existed.
Line 7 & 8 isn't output, too. Because of without using std namespace.
*/
