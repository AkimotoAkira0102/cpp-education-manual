#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	char *ptr[3] = {"Tom","Lily","James Lee"};
	for(int i=0;i<3;i++){
		cout << ptr+i << ", " << ptr[i] << endl;
	}
	system("pause");	//pause the program
	return 0;
}
