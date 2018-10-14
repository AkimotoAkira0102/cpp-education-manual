#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

void print(void);		//declare function prototype
void print(int);
void print(char,int);

int main(void){
	cout << "Calling print(),";
	print();
	cout << "Calling print(8),";
	print(8);
	cout << "Calling print('%',8),";
	print('%',8);
	system("pause");	//pause the program
	return 0;
}

void print(void){
	print(5);
}

void print(int times){
	for(int i=0;i<times;i++){
		cout << "*";
	}
	cout << endl;
}

void print(char ch,int times){
	for(int i=0;i<times;i++){
		cout << ch;
	}
	cout << endl;
}
