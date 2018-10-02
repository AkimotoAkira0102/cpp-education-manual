#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int i;
	for(i=1;i<=100;i++){
		if(i%18==0){
			cout << i << endl;
		}
	}
	system("pause");		//pause the program
	return 0;				//retunr integer 0
}							//end of main block
