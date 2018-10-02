#include <iostream>			//include iostreram files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

inline void star(void){
	cout << "***********" << endl;
}

int main(void){				//begining of main block
	star();	
	cout << "Hello, C++." << endl;
	star();
	system("pause");		//pause the program
}
