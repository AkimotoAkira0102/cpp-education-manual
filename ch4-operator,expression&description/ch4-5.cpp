#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main blocck
	int i;					//declaring i is a integer
	cout << "Input a integer:";		//print string
	cin >> i;				//input a integer to i
	if (i>5){			 	//decide i is bigger than 5 or not	
		cout << i << ">5" << endl;		//print i is bigger than 5
	}
	if (i%2==0){			//decide i is a even number or not
		cout << i << " is a even number." << endl;		//print i is a even number
	}
	if (true){				//decide true is valid or not
		cout << "This line is always executed." << endl;		//print string
	}
	system ("pause");		//pause the program
	return 0;				//return integer 0	
}							//end of main block
