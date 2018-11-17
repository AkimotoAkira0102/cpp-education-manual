#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

union data{
	char grade;
	int score;
} student;

int main(void){
	char sex;
	do{
		cout << "Your sex is (1)Male  (2)Female:";
		cin.get(sex);
		cin.get();	
	} while(sex != '1' & sex != '2');
	
	if(sex == '1'){
		cout << "Input score:";
		cin >> student.score;
	} else {
		cout << "Input grade:";
		cin >> student.grade;
	}
	cout << "****OUTPUT****" << endl;
	if(sex == '1'){
		cout << "student.score =" << student.score << endl;
	} else {
		cout << "student.grade =" << student.grade << endl;
	}
	system("pause");	//pause the program
	return 0;
}
