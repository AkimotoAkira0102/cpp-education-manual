/*self-evaluation 3-12 */
#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main (void){		//begining of main block
	int num;			//declaring num is a integer
	cout << "Please enter a number:";		//print string
	cin >> num;			//input number in num
	cout << "We will make this number become negative number." << endl;
	cout << "The negative number is " << -num << endl;		//let the number become negative number
	system ("pause");	//pause the program
	return 0;			//return integer 0
}						//end of main block
