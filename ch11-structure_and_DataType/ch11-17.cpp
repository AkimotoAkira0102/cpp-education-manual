#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	typedef float temper;
	temper f,c;
	cout << "Input Celsius degrees:";
	cin >> c;
	f = (float)(9.0/5.0)*c + 32;
	cout << c << " Celsius is equal to " << f << " Fahrenheit degrees" << endl;
	system("pause");	//pause the program
	return 0;
}
