#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int i=369;				//declaring i is a integer and equal to intger 369
	char ch=i;				//declaring ch is a character and equal to integer 369
	cout << "ch=" << ch << endl;		//print ch
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block

/*
Why is answer is q?
Because character just hava 8 bits, 369 over 8 bits.
Binary of 369 is 101110001 and it over 11111111,
Computer will get last 8 bits, it means computer regard 101110001 as 01110001.
Binary 01110001 is decimal 113, and then ASCII 113 is character q. 
*/
