#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int x;					//declaring x is a integer
	cout << "Input a number, I will output absolute value. Number:";
	cin >> x;
	if(x<0){
		cout << "Absolute value of "  << x << " is " << 0-x << "." << endl;
	}
	else{
		cout << "Absolute value of "  << x << " is " << x << "." << endl;
	}
	system("pause");		//pause the rpogram
	return 0;				//return integer 0
}							//end of main block
