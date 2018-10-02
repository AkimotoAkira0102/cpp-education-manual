#include <iostream>		//include iostream files
#include <cstdlib> 		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//use namespace std
	int rope_len = 3500,i;
	for(i =0;i<1000;i++){
		rope_len = rope_len/2;
		cout << rope_len << endl;
		if(rope_len < 3){
			break;
		}
	}
	cout << "Spending " << i << " days let length of rope shorter than 3 meter." << endl;
}
