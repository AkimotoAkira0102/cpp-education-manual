#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int square(int a){			//custom function square, calculate square value
	int squ;
	squ = a*a;
	return squ;
}

int main(void){				//begining of mian block
	int x;
	cout << "Enter a integer:";
	cin >> x;
	cout << "square(" << x << ") = " << square(x) << endl;		//print square value
	system("pause");
	return 0;
}

