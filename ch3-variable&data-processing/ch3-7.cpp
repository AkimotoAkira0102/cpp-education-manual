#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//beginin of main block
	char beep='\a';			//declaring beep is a character and equal to character \a, \a meeans alert sound
	int i=beep;				//declaring i is a integer and equal to integer beep
	cout << "beep=" << beep;	//print alert sound
	cout << i << endl;			//print integer i(beep)
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
