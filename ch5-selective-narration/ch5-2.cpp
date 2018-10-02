#include <iostream>				//include iostream files
#include <cstdlib>				//include cstdlib files
using namespace std;			//use namespace std

int main(void){					//begining of main block
	int a,b,min;
	cout << "Let's play larger and smaller. Please iput 2 numbers." << endl;
	cout << "First number:";
	cin >> a;
	cout << "Second number";
	cin >> b;
	min=(a<b)?a:b;				//use conditional operators to decide which a and b are smaller?
	cout << "First number is " << a << ". Second number is " << b << ". " << min << " is smaller." << endl;
	system("pause");			//pause the program
	return 0;					//return integer 0
} 								//end of main block
