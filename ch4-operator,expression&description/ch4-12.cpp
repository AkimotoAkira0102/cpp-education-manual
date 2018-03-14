#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	char ch='X';			//declaring ch is a character and equal to character X
	short s=-5;				//declaring s is a short integer and equal to -5
	int i=6;				//declaring i is a integer and equal to 6
	float f=9.7f;			//declaring f is a float point number and equal to 9.7
	double d=1.76;			//declaring d is a double float point number and equal to 1.76
	cout << "(s*ch)-(d/f)*(i+f)=" << (s*ch)-(d/f)*(i+f) << endl;	//print the outcome of  (s*ch)-(d/f)*(i+f)
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
