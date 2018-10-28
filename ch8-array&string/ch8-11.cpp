#include <iostream> 			//include iostream files
#include <cstdlib>				//include cstdlib files
using namespace std;			//use namespace std

int main(void){					//begining of main block
	char a[] = "My friend";
	char b = 'c', str[] = "c";
	cout << "size of a = " << sizeof(a) << endl;
	cout << "size of b = " << sizeof(b) << endl;
	cout << "size of str = " << sizeof(str) << endl;
	system("pause");			//pause the program
	return 0;
}
