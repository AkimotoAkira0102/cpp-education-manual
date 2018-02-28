//self-evaluation 3-13
#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	float f;				//declaring f is a float
	cout << "Please a floating-point number:";		//print string
	cin >> f;				//input float to f
	cout << "I will double it."	<< endl;		//print string
	cout << "The outcome is " << f*f << "." << endl;	//print f*f
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
