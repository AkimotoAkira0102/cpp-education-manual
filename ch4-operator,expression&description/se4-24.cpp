#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	char ch='A';
	short s=12;
	float f=12.4f;
	int i=15;
	double d=13.62;
	
	cout << "(a) s+(f/s)+(ch*i)=" << s+(f/s)+(ch*i) << endl;
	cout << "(b) ch+d/(s-i)*f=" << ch+d/(s-i)*f << endl;
	cout << "(c) (s+d)/ch*(d+i)=" << (s+d)/ch*(d+i) << endl;
	system("pause");			//pause the program
	return 0;				//return integer 0
}							//end of main block
