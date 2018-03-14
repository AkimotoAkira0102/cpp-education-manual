#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	char ch='A';
	short s=38;
	float f=10.4f;
	int i=12;
	double d=8.4;
	
	cout << "(a) ch*(f-s)+(i-d)=" << ch*(f-s)+(i-d) << endl;
	cout << "(b) d-s*(i+f)-ch=" << d-s*(i+f)-ch << endl;
	cout << "(c) (i+s)/f+ch*(s-ch)=" << (i+s)/f+ch*(s-ch) << endl;
	cout << "(d) 5-(ch+s)/4= " << 5-(ch+s)/4 << endl;
	system("pause");			//pause the program
	return 0;				//return integer 0
}							//end of main block
