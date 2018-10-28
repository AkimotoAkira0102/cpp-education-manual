#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
#include <string>			//include string files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	char str[] = "";
	string str2 = "";
	cout << "str = " << str << endl;
	cout << "sizeof(str) = " << sizeof(str) << endl;
	cout << "str2 = " << str2 << endl;
	cout << "sizeof(str2) = " << sizeof(str2) << endl;
	cout << "length of str2 = " << str2.length() << endl;
	system("pause");		//pause the program
	return 0;
}
