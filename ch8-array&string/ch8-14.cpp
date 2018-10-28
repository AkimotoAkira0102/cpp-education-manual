#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int age;
	char name[20];
	cout << "How old are you?";
	cin >> age;
	cin.get();
//	(cin >> age).get();
	cout << "What;s your name?";
	cin.getline(name,20);
	cout << name << " is " << age << "-year-old!" << endl;
	system("pause");		//pause the program
	return 0;
}
