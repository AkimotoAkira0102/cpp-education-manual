#include <iostream>		//including  iostream files
#include <cstdlib>			//including  cstdlib files
using namespace std;

int main(void) {			//begining of main block
	bool jump_out=false;
	int i = 0;
	do{
		if(i % 3==1 && i % 5 ==3 && i % 7 == 2){
			cout << i << endl;
			jump_out = true;	
		}
		i++;
	}while(jump_out == false);
}
