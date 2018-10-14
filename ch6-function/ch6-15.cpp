#include <iostream> 			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int power(int,int);			//declare function prototype

int main(void){				//begining of main block
	int num1,num2;
	cout << "Enter number 1:";
	cin >> num1;
	cout << "Enter number 2:";
	cin >> num2;
	cout << num1 << " to the power of " << num2 << " is " << power(num1,num2) << endl;
	system("pause");		//pause the program
	return 0;
}

int power(int x, int y){
	if(y==0){
		return 1;
	} else {
		return x*power(x,y-1);
	}
}
