#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

struct data{			//define struction
	string name;
	int US,TW;
};

void change(struct data *), printStr(struct data);		//declare function prototype

int main(void){			//begining of main block
	struct data first = {"paul",88,97};		//declare struction variable
	printStr(first);
	cout << "==========After function change(&first)==========" << endl;
	change(&first);
	printStr(first);
	system("pause");	//pause the program
	return 0;
}

void change(struct data *ptr){
	int tmp;
	tmp = ptr->US;
	ptr->US = ptr->TW;
	ptr->TW=tmp;
	return;
}

void printStr(struct data ptr){
	cout << "name =" << ptr.name << endl;
	cout << "TW =" << ptr.TW << "\t";
	cout << "US =" << ptr.US << endl;
	return;
}
