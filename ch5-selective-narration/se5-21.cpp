#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;

int main(void){			//begining of main block
	int n = 45,maxPrime;
	int num = n;
	
	for(int i=2;i<n;i++){
		if(n%i==0){
			n--;
			continue;
		}
		maxPrime = n;
	}
	cout << "Max prime between 1 and " << num << " is " << maxPrime << endl;
}
