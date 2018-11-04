#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int a[3] = {5,7,9};
	int sum = 0;
	for(int i=0;i<3;i++){
		sum += *(a+i);
	}
	cout << "sum = " << sum << endl;
	system("pause");	//pause the program
	return 0;
}
