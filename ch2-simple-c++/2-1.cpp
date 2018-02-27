#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files

using namespace std;		//use namespace std, because of cout and endl 

int main(void){				//begining of main block 
	int num;				//announcing num is a integer  
	num = 3;					//announcing num is equal to 3
	cout << "I have " << num << " apples." << endl;				//print the string
	cout << "You habe " << num << " apples, too.\n";			//print the string
	system ("pause");		//pause the program to observe the outcome
	return 0;				//return integer 0 
} 							//end of main block

/*if we don't use std namespace, the programe will like this.
#include <iostream>
#include <cstdlib>
int main (void){
	int num;
	num = 3;
	std::cout << "I have " << num << " apples." << std::endl;
	std::cout << "You habe " << num << " apples, too.\n";
	system ("pause");
	return 0;
}
*/

