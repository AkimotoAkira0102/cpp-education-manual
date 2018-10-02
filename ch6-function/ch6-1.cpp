#include <iostream>		//include iostream files
#include <cstdlib> 		//include cstdlib files
using namespace std;

void star(void);

int main(void){			//begining of main block
	star();
	cout << "6*6 = " << 6*6 << endl;
	star();
	system("pause");
	return 0;
}

void star(void){
	int j;
	for(j=0;j<9;j++){
		cout << "*";
	}
	cout << endl;
}
