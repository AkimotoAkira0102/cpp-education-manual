#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <string>		//include string files
using namespace std;	//use namespace std
int main(void){			//begining of main block
	string first = "Junie";
	string last = "Hong";
	cout << "Full name =" << first + " " + last << endl;
	first += " ";
	first += last;
	cout << "Full name =" << first << endl;
	system("pause");	//pause the o\program
	return 0;
}
