#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main (void){		//begining of main block
	int x,y;			//declaring x & y are integers
	cout << "Input first integer:";		//print string
	cin >> x;			// input first integer and store in x
	cout << "Input second integer:";		//print string
	cin >> y;			//Input second integer and store in y 
	cout << x << "+" << y << "=" << x+y << endl;	//print the sum
	system ("pause");	//pause the program
	return 0;			//return integer 0
}						//end of main block
