#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int n=20,*p,**pp;
	p=&n;
	pp=&p;
	cout << "n = " << n << ", &n = " << &n << ", *p = " << *p << ", &p = " << &p << endl;
	cout << "**pp = " << **pp << ", *pp = " << *pp << ", pp = " << pp << ", &pp = " << &pp << endl;
	system("pause");		//pause the program
	return 0;
}
