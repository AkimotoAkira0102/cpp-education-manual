#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace	std

int main(void){				//begining of main block
	int num = 5;
	int &reference = num;
	cout << "num = " << num << endl;
	cout << "reference = " << reference << endl;
	cout << "&reference = " << &reference << endl;
	num = num + 5;
	cout << "=============After num + 5=============" << endl;
	cout << "num = " << num << endl;
	cout << "reference = " << reference << endl;
	cout << "&reference = " << &reference << endl;
	reference += 5;
	cout << "=============After reference + 5=============" << endl;
	cout << "num = " << num << endl;
	cout << "reference = " << reference << endl;
	cout << "&reference = " << &reference << endl;
	system("pause");		//pause the program
	return 0;
}
