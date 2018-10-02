#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int a,b;
	for(a=1;a<10;a++){
		for(b=1;b<10;b++){
			cout << a << "*" << b << "=" << a*b << " \t";
		}
	cout << endl;
	}
	system ("pause");		//pause the program
	return 0;				//return integer 0
} 							//end of main block
