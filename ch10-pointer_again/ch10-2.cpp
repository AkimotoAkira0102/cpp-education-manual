#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int num[3][4];
	cout << "num = " << num << ", &num = " << &num << ", *num = " << *num << endl;
	cout << "num[0] = " << num[0] << ", &num[0] = " << &num[0] << endl;
	cout << "num[1] = " << num[1] << ", &num[1] = " << &num[1] << endl;
	cout << "num[2] = " << num[2] << ", &num[2] = " << &num[2] << endl;
	system("pause");	//pause the program
	return 0;
}
