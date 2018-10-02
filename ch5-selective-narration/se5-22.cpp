#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;

int main(void){			//begining of main block
	int target;
	for(int i = 1;i < 100;i++){
//		if(i%2==0 && i%3==0){
//			if(i%12!=0){
//				cout << i << endl;
//			}
//		}
		if(i%12==0){
			continue;
		}
		if(i%2==0&&i%3==0){
			cout << i << endl;
		}
	}
}
