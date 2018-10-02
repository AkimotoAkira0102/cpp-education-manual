#include <iostream>		//include iostream files
#include <cstdlib>      //include cstdlib files
using namespace std;

int main(void){			//begining of main block
	int x;
	cin >> x;
	for(int i=1;i<x-1;i++){
		if(x%i==0){
			cout << "not prime" << endl;	
		} else {
			cout << "prime" << endl;
			break;
		}
	}
}
