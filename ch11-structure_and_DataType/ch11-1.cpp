#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

struct mydata{			//declare and define struct variable
	string name;
	int math;
} student; 

int main (void){		//begining of main block
	cout << "Student's name:";
	getline(cin,student.name);
	cout << "Math score:";
	cin >> student.math;
	cout << "*******Output*******" << endl;
	cout << student.name << "'s Math score is " << student.math << endl;
	system("pause");	//pause the program
	return 0;
}
