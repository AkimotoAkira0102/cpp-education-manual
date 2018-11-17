#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

void replace(int *,int,int);	//declare function prototype

int main(void){				//begining of main block
	int a[5] = {1,2,3,4,5};
	int num = 100;
	cout << "Before function replace(), array's content is :";
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	replace(a,4,num);
	cout << "After function replace(), array's content is:";
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");		//pause the program
	return 0;
}

void replace(int *ptr,int n,int num){
	*(ptr+n-1) = num;
	return;
}
