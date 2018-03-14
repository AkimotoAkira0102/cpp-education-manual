#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int i,sum=0;
	cout << "Please iput a number:";
	cin >> i;
	cout << "Let's total 0~" << i << "." << endl;
	for(int x=1; x<=i; x++)
	{
		sum+=x;				//sum=sum+i
		cout << "Cumulative frequency:" << x << "  Total is " << sum << endl;
	}
	system ("pause");		//pause the program
	return 0;				//return integer 0
}							//end of main block
