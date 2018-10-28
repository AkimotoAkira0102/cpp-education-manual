#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std
int main(void){			//begining of main block
	int *ptr,num=20;
	ptr = &num;
	cout << "num = " << num << ", &num = " << &num << endl;
	cout << "*ptr = " << *ptr << ", ptr = " << ptr << ", &ptr = " << & ptr << endl;
	system("pause");	//pause the program
	return 0;
}
