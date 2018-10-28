#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std
int main(void){			//begining of main block
	char students[3][15];		//declare string array which have 3 strings and their length are 15 characters
	for(int i=0;i<3;i++){
		cout << "Input student" << i << "'s name:";
		cin.getline(students[i],15);
	}
	cout << "***** O U T P U T *****" << endl;
	for(int i=0;i<3;i++){
		cout << "Students[" << i << "]=" << students[i] << endl;
	}
	system("pause");	//pause the program
	return 0;
}
