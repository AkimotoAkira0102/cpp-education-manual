#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	char name[20];
	char *ptr = "How are you?";
	cout << "What's your name?";
	cin.getline(name,20);
	cout << "Hi, " << name << ", " << ptr << endl;
	system("pause");	//pause the program
	return 0;
}
