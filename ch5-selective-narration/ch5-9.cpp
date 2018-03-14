#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main(void){				//begining of main block
	int i;					//declaring i is a integer
	for(i=1;i<=10;i++){
		if(i%4==0){
			continue;		//When i%4=0, the loop will continue to execute from starting point
		}
		cout << "i=" << i << endl;
	}
	cout << "When loop interruped, i=" << i << "." << endl;
	system("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
