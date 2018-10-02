#include <iostream> 	//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//befining of main block
	int i = 0;
	cout << "Before entering the loop, i = " << i << endl;
	for(i=0;i<100000000;i++);
	cout << "After existing the loop, i = " << i << endl;
}
