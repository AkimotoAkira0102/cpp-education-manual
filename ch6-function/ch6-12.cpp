#include <iostream> 		//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

void sum(int),fact(int);	//declare function prototype

int main(void) {				//begining of main block
	int a = 5;
	sum(a);
	fact(a);
	system("pause");
	return 0;
}

void sum (int x){
	int total = 0;
	for (int i=1;i<=x;i++){
		total += i;
	}
	cout << "1+2+...+" << x << " = " << total << endl;
	return;
}

void fact(int x){
	int total = 1;
	for(int i=1;i<=x;i++){
		total = total*i;
	}
	cout << "1*2*....*" << x << " = " << total << endl;
	return;
}
