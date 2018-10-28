#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	char name[3][10] = {"Dvaid","Jane Wang","Tom Lee"};		//declare string array which have 3 strings and their length are 10 character
	for(int i=0;i<3;i++){
		cout << "name[" << i << "]=" << name[i] << endl;
	}
	cout << "========= address =========" << endl;
	for(int i=0;i<3;i++){
		cout << "address of name[" << i << "]=" << &name[i] << endl;
		cout << "name[" << i << "]=" << name[i] << endl;
		cout << "name+" << i << "=" << (name+i) << endl << endl;
	}
	system("pause");		//pause the program
	return 0;
}
