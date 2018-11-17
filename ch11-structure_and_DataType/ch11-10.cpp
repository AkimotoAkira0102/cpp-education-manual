#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

union data{
	short math;
	float avg;
} student;

int main(void){				//begining of main block
	cout << "sizeof(student) =" << sizeof(student) << endl;
	cout << "address of student.math = " << &student.math << endl;
	cout << "address of student.avg = " << &student.avg << endl;
	system("pause");		//pause the program
	return 0;
}

