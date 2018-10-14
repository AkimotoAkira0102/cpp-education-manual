#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

void add10(int,int);		//declare function prototype

int main(void){				//begining of main block
	int a = 20, b = 50;
	cout << "Before calling add10(): " << "a = " << a << " , b = " << b << endl;
	add10(a,b);
	cout << "After calling add10(): " << "a = " << a << " , b = " << b << endl;
	system("pause");		//pause the program
	return 0;
}

void add10(int i, int j){
	i+=10;
	j+=10;
}
