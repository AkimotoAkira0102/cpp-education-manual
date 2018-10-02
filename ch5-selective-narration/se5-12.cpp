#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
#include <cmath>			//include cmath files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int i,sum=0;
	for(i=1;i<=100;i++){		//sigma 1^2+2^2+...+100^2
		sum=sum+pow(i,2);
	}
	cout << sum << endl;
	/*Mathematics sigma*/
	i--;
	cout << i*(i+1)*(2*i+1)/6 << endl;
	system("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
