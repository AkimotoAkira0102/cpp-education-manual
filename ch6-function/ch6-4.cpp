#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int max(int,int);			//declaring function prototype

int main(void){				//begining of main block
	int a,b;
	cout << "Enter first integer:";
	cin >> a;
	cout << "Enter second integer:";
	cin >> b;
	cout << "The lager number is " << max(a,b) << endl;
	system("pause");		//pause the program
	return 0;
}


int max(int x,int y){		//custom function max(), return bigger one
	return x > y ? x : y;
}
