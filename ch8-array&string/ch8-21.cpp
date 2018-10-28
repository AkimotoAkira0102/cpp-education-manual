#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
#include <string>			//include string files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	string students[3] = {"David","Jane Wang","Tom Lee"};
	string copystr[3];
	for(int i=0;i<3;i++){
		copystr[i] = students[i];
	}
	for(int i=0;i<3;i++){
		cout << "copystr[" << i << "]=" << copystr[i] << endl;
	}
	system("pause");		//pause the program
	return 0;
}

