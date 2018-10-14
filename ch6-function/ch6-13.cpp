#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

void fact(int),sum(int);	//declare function prototype

int main(void){				//begining of main block
	int a = 5;
	fact(a);
	sum(a+5);
	system("pause");		//pause the program
	return 0;
}

void sum (int x){
	int total = 0;
	for(int i=1;i<=x;i++){
		total += i;
	}
	cout << "1+2+...+" << x << " = " << total << endl;
	return;
}

void fact(int y){
	int total = 1;
	for(int i=1;i<=y;i++){
		total = total*i;
	}
	cout << "1*2*...*" << y << " = " << total << endl;
	sum(y);
	return;
}
