#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

union data{					//define  common space
	int score;
	char grade;
} student{65};

int main(void){
	cout << "sizeof(student) = " << sizeof(student) << endl;
	cout << "Student.score = " << student.score << endl;
	cout << "Student.grade = " << student.grade << endl;		//value of ASCII 65 is A
	system("pause");		//pause the program
	return 0;
}
