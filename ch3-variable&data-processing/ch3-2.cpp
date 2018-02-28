#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace files

int main (void){		//begining of main block
	/*declare various data types*/
	unsigned int i=0;
	unsigned short int j=0;
	char ch =' ';
	float f = 0.0f;
	double d = 0.0;
	
	/*print the long of various data types */
	
	cout << "sizeof(int)=" << sizeof(int) << endl;
	cout << "sizeof(long int)=" << sizeof(long int) << endl;
	cout << "sizeof(unsigned int)=" << sizeof(unsigned int) << endl;
	cout << "sizeof(i)=" << sizeof(i) << endl;
	cout << "sizeof(unsigned int)=" << sizeof(i) << endl;		//sizeof()'s parament is variable and data type

	cout << "----------------------" << endl;		//break line
		
	cout << "sizeof(int)=" << sizeof(int) << endl;
	cout << "sizeof(short int)=" << sizeof(short int) << endl;
	cout << "sizeof(unsigned short int)=" << sizeof(unsigned short int) << endl;
	cout << "sizeof(j)=" << sizeof(j) << endl;
	cout << "sizeof(unsigned short int)=" << sizeof(j) << endl;		//parament of sizeof() is variable and data type

	cout << "----------------------" << endl;		//break line
	
	cout << "sizeof(char)=" << sizeof(ch) << endl;
	cout << "sizeof(float)=" << sizeof(f) << endl;
	cout << "sizeof(double)=" << sizeof(d) << endl;
	cout << "sizeof(bool)=" << sizeof(bool) << endl;
	system ("pause");	//pause the program
	return 0;			//return integer 0	
}						//end of main block
