#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

void print(char,int &);	//declare function proytotype

int main(void){
	int count=0;
	for(int i=0;i<3;i++){
		print('*',count);
	}
	cout << endl;
	for(int i=0;i<5;i++){
		print('$',count);
	}
	cout << endl;
	cout << "print() function is called " << count << " times." << endl;
	system("pause");	//pause the program
	return 0;
}

void print(char ch,int &num){
	cout << ch;
	num++;
	return;
}
