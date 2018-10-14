#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int add(int,int);			//declare function prototype
double add(double,double);	//declare function prototype
int main(void){
	int a=10,b=20;
	double x=2.3,y=4.5;
	add(x,y);
	cout << a << "+" << b << "=" << add(a,b) << endl;
	cout << x << "+" << y << "=" << add(x,y) << endl;
	system("pause");		//pause the program
	return 0;
}

int add(int a,int b){
	return a+b;
}

double add(double a,double b){
	return a+b;
}
