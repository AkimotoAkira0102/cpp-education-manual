#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int *Max(int*,int*);	//declare prototype function

int main(void){			//begining of main block
	int a = 17, b = 12, *ptr;
	ptr = Max(&a,&b);
	cout << "Max = " << *ptr << endl;
	system("pause");	//pause the program
	return 0;
}

int *Max(int *x,int *y){
	return *x>*y?x:y;
}
