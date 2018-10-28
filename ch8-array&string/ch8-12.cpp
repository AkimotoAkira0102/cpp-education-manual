#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	char name[15];
	for(int i =0;i<2;i++){
		cout << "What's your name?";
		cin >> name;
		cout << "Hi, " << name << ", how are you?" << endl;
	}
	system("pause");		//pause the program
	return 0;
}
