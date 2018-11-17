#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
#include <cstring>		//include cstring files
using namespace std;	//use namespace std

struct mydata{
	string name	;
	int age;
} x;

int main(void){
	cout << "x.name =" << x.name << ", x.age =" << x.age << endl;
	struct mydata y = {"Lily Saber",16};
	x = y;
	cout << "************After struct mydata y ={\"Lily Saber\",16}   and   x=y************" << endl;
	cout << "x.name =" << x.name << ", x.age =" << x.age << endl;
	cout << "y.name =" << y.name << ", y.age =" << y.age << endl;
	system("pause");	//pause the program
	return 0;
}
