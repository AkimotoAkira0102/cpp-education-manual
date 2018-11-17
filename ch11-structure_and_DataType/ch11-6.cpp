#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

struct student{			//define struction
	string name;
	int math,english;
};

float avg(int,int);		//declare function prototype

int main(void){			//begining of main block
	struct student paul = {"paul",88,97};
	cout << paul.name << "'s math score =" << paul.math << endl;
	cout << "English score =" << paul.english << endl;
	cout << "Average =" << avg(paul.math,paul.english) << endl;
	system("pause");	//pause the program
	return 0;
}

float avg(int x, int y){	//custome function
	return (float)(x+y)/2;
}
