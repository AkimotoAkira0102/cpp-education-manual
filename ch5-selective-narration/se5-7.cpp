#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int x;					//declaring x is a integer
	cout << "Input a number, I will determine it is odd number or even number. Number:";
	cin >> x;
	if(x%2==0){
		cout << x << " is a even number." << endl;
	}
	else{
		cout << x << " is a odd number." << endl;
	}
	system("pause");		//pause the program
	return 0;				//return integer 0 
}							//end of main block
