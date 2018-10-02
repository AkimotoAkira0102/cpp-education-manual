#include <iostream> 	//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int i=0;
	int sum;
	while(i<=20){
		if(i%2==0){
			sum += i * i;
			cout << sum << endl;
		}
		i++;
	}
	cout << sum << endl;
}
