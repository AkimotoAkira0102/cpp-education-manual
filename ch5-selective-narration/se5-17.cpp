#include <iostream>		//include iostream files
#include <cstdlib>		//include cstdlib files
using namespace std;	//use namespace std

int main(void){			//begining of main block
	int i = 1,j = 1; 
	do{
		do{
			cout << i << "*" << j << "=" << i*j << "\t";
			j++;
		}while(j<10);
		i++;
		j = 1;
	}while(i<10);
}
