#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

struct mydata{
	string name;
	int math;
} student = {"Mary Wang",74};

int main(void){				//begining of main block
	cout << "Student's name:" << student.name << endl;
	cout << "Math score = " << student.math << endl;
	system("pause");		//pause the program
	return 0;
}
