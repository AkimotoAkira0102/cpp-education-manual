#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){
	int i=0,sum=0;
	while(i<=200){
		if(i%2==0){
			sum += i;
		}
		i++;
	}
	cout << sum << endl;
}
