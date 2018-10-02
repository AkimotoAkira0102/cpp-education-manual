#include <iostream>			//include iostream files
#include <cstdlib>			//include cstddlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int num=42;
	if(num%3==0 && num%7==0){
		cout << num << " is dvisible by 3 and 7." << endl;		//42%21==0
	}
	else
	{
		cout << num << "isn't divisible by 3 and 7." << endl;
	}
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
