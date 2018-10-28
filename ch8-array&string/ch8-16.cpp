#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <string>		//include string files
using namespace std;	//use namespace std
int main(void){			//begining of main block
	int num;
	string proverb;
	cout << "Enter repeat times:";
	(cin >> num).get();
	cout << "Enter string you want to print:";
	getline(cin,proverb);
	for(int i=0;i<num;i++){
		cout << proverb << endl;
	}
	system("pause");	//pause the program
	return 0;
}
