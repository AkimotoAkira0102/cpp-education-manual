#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int a = 5, b = 3,*ptr;
	cout << "&ptr = " << &ptr << endl;
	ptr = &a;
	cout << "&a = " << &a << ", &ptr = " << &ptr << ", ptr = " << ptr << ", *ptr = " << *ptr << endl;
	ptr = &b;
	cout << "&b = " << &b << ", &ptr = " << &ptr << ", ptr = " << ptr << ", *ptr = " << *ptr << endl;
	system("pause");
	return 0;
}
