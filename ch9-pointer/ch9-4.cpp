#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int *ptri;
	char *ptrc;
	cout << "sizeof(ptri) = " << sizeof(ptri) << endl;
	cout << "sizeof(ptrc) = " << sizeof(ptrc) << endl;
	cout << "sizeof(*ptri) = " << sizeof(*ptri) << endl;
	cout << "sizeof(*ptrc) = " << sizeof(*ptrc) << endl;
	system("pause");		//pause the program
	return 0;
}
