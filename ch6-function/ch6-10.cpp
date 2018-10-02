#include <iostream> 		//include iostream files 
#include <cstdlib>			//include cstdilb files
using namespace std;

static int a;				//declaring static interger
void odd(void);				//declaring function prototype

int main(void){				//begining of main block
	odd();
}

void odd(void){
	a = 10;
	if(a%2==1){
		cout << "a =" << a << ", a is odd number" << endl;
	} else {
		cout << "a =" << a << ", a is even number" << endl;
	}
	return;
}
