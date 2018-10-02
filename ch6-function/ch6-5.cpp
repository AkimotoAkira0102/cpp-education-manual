#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std;

void print(int,char);				//declare function prototype

int main(void){				//begining of mainb block
	int a = 6;
	char ch = '%';
	print(a,ch);
	cout << "Printed!!" << endl;
	system("pause")	;		//pause the program
}

void print(int x, char y){
	for(int i=0;i<x;i++){
		cout << y;
	}
	cout << endl;
	return;
}
