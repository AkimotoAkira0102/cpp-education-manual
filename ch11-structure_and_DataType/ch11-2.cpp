#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

struct mydata{			//define struct
	string name;
	int math;
} student;

int main(void){			//begining of main block
	cout << "sizeof(student) = " << sizeof(student) << endl;
	system("pause");	//pause the program
	return 0;
}
