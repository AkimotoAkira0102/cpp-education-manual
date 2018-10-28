#include <iostream>			//include iostream files
#include<cstdlib>			//include cstdlib files
#include<iomanip>			//include iomanip, because of iomanip
using namespace std;		//use namespace std

void func(int []);

int main(void){				//begining of main block
	int i,a[4] = {20,13,8,6};
	cout << "In main()," << endl;
	for(i=0;i<4;i++){
		cout << "a[" << i << "] = " << setw(2) << a[i] << ", address =" << &a[i] << endl;
	}
	func(a);
	system("pause");		//pause the program
	return 0;
}

void func(int b[]){
	cout << "In func()," << endl;
	for(int i=0;i<4;i++){
		cout << "b[" << i << "] = " << setw(2) << b[i] << ", address =" << &b[i] << endl;
	}
}
