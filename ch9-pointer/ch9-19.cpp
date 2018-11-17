#include <iostream>			//include iostream files
#include <cstdlib>			//include cstdlib files
using namespace std;		//use namespace std

int *maximum(int *);		//declare function prototype

int main(void){				//begining of main block
	int a[5] = {3,1,7,2,6};
	int *ptr;
	cout << "Array's content is : ";
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	ptr = maximum(a);
	cout << "Max is : " << *ptr << endl;
	system("pause");		//pause the program
	return 0;
}

int *maximum(int *arr){
	int *max;
	max = arr;
	for(int i=0;i<5;i++){
		if(*max<*(arr+i)){
			max = arr+i;
		}
	}
	return max;
}
