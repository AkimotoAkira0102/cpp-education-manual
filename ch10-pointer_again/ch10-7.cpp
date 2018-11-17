#include <iostream>		//include iostream files
#include <cstdlib>		//include <cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

char *setString(char *);

int main(void){
	char *str;
	str = setString("Hello, C++.");
	cout << str << endl;
	system("pause");	//pause the program
	return 0;
}

char *setString(char *text){
	char *ptr;
	ptr = new char[strlen(text)+1];
	strcpy(ptr,text);
	return ptr;
}
