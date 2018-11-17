#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

enum month{
	January,February,March = 4,April,May,June
} six;

int main(void){
	cout << "January = " << January << endl;
	cout << "February = " << February << endl;
	cout << "March = " << March << endl;
	cout << "April = " << April << endl;
	cout << "May = " << May << endl;
	cout << "June = " << June << endl;
	system("pause");	//pause the program
	return 0;
}
