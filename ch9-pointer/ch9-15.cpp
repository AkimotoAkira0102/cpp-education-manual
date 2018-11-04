#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){
	int a[3] = {5,7,9};
	for(int i=0;i<3;i++){
		cout << "a[" << i << "] = " << a[i] << ", *(a+" << i << ") = " << *(a+i) << endl;
	}
	system("pause");	//pause the program
	return 0;
}
