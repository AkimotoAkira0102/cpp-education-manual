#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int main (void){			//begining of main block
		int i=1,num,sum=0;		//declaring i and num are integers and num is equal to 0
		cout << "Calculate the total. Please enter a number:";
		cin >> num;
		while(i<=num){
			sum=sum+i; 
			i++;
		}
		cout << "Total is " << sum << "." << endl;
		system("pause");	//pause the program
		return 0;
} 							//end of main block
