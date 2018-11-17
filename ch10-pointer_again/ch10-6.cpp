#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int *a;
	a = new int[5];
	for(int i=0;i<5;i++){
		a[i] = i*2;
	}
	for(int i=0;i<5;i++){
		cout << "a[" << i << "] = " << a[i] << "\t";
	}
	cout << endl;
	delete [] a;
	a = NULL;
	system("pause");	//pause the program
	return 0;
}
