#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
	int num,i=1,sum=0;
	cout << "Calculate the sum of odd numbers. Please a odd number:";
	do{
		cin >> num;
	}while(num<1 || num%2==0);
	do
	{
		sum=sum+i;
		i+=2;
	}while(i<=num);
	cout << "Total of odd numbers is " << sum << "." << endl;
	system ("pause");		//pause the program
	return 0;				//return integer 0
} 							//end of main block
