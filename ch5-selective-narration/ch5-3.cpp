#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int i,sum;
	sum=0;
	for(i=1;i<=15;i++){
		sum+=i;
	}
	cout << "1+2+...+15=" << sum << endl;
	system ("pause");		//pause the program
	return 0;				//return integer 0
} 							//end of main block
