#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

struct mydata{
	string name;
	int age;	
};

void func(struct mydata);

int main(void){			//begining of main block
	struct mydata mysister = {"Kelly Wu",28};
	cout << "Before process..." << endl;
	cout << "In main(), " << mysister.name << "'s age is " << mysister.age << endl;
	cout << "After process..." << endl;
	func(mysister);
	cout << "In main(), " << mysister.name << "'s age is " << mysister.age << endl;
	system("pause");	//pause the program
	return 0;
}

void func(struct mydata _oData){
	cout << "In func(), ";
	_oData.age += 10;
	cout << _oData.name << "'s age is " << _oData.age << endl;
}
